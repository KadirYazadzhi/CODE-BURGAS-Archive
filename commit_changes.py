import subprocess
import os
import re

def get_git_status():
    result = subprocess.run(['git', 'status', '--porcelain'], capture_output=True, text=True)
    return result.stdout.splitlines()

def is_binary_root_file(path):
    # known list of potential binaries based on previous output
    binaries = {
        "Animatanto", "Ants", "Birthday", "Blackjack", "Book", "Boring Party",
        "Chess Rook", "Codograd Square", "Croissants", "Difference", "Goshos Union",
        "Multi-Sock", "Net", "Number Systems", "Pandemic", "Presents", "Shield",
        "Sum and Product", "Sums", "The Cake", "Triangle", "Warm-Up", "Words"
    }
    return path in binaries or path.startswith("cmake-build-")

def group_changes(lines):
    changes = {}
    
    # Regex to capture Year/Group X/Task Name
    # Matches: 2019/Group A/A. Number Systems/...
    pattern = re.compile(r'"?(\d{4}/Group [A-E]/[A-D]\. [^/]+)/.*"?')
    
    for line in lines:
        if not line.strip(): continue
        
        # porcelain format: XY PATH (where path might be quoted)
        # XY are status codes. 
        # path starts at index 3.
        # Handle quoted paths
        raw_path = line[3:]
        if raw_path.startswith('"') and raw_path.endswith('"'):
            path = raw_path[1:-1]
        else:
            path = raw_path
            
        # Ignore root binaries
        if is_binary_root_file(path):
            print(f"Skipping potential binary: {path}")
            continue

        match = pattern.match(path)
        if match:
            task_key = match.group(1)
            if task_key not in changes:
                changes[task_key] = []
            changes[task_key].append(path)
        else:
            # Handle root files like CMakeLists.txt or LICENSE if changed
            if "/" not in path:
                key = "Root Config"
                if key not in changes:
                    changes[key] = []
                changes[key].append(path)
            else:
                # Items that didn't match the standard task structure
                # Maybe they are deep but weirdly named?
                # Just add them to a "Misc" group or try to extract year/group
                print(f"Uncategorized path: {path}")
                
    return changes

def execute_commits(changes):
    # Sort keys for deterministic order (Year, Group, Task)
    sorted_keys = sorted(changes.keys())
    
    for key in sorted_keys:
        files = changes[key]
        if not files: continue
        
        print(f"Processing {key}...")
        
        # Git add
        # We need to quote files for shell safety if they have spaces
        # But subprocess handles list args well.
        cmd_add = ['git', 'add'] + files
        subprocess.run(cmd_add, check=True)
        
        # Git commit
        msg = f"Update {key}"
        if key == "Root Config":
            msg = "Update project configuration files"
            
        cmd_commit = ['git', 'commit', '-m', msg]
        subprocess.run(cmd_commit, check=True)

if __name__ == "__main__":
    lines = get_git_status()
    groups = group_changes(lines)
    execute_commits(groups)
