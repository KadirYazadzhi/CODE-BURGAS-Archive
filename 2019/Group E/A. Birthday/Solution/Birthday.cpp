#include <iostream>
#include <vector>

using namespace std;

int getYearDay(int day, int month) {
  const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int total = 0;

  for (int i = 0; i < month - 1; i++) total += monthDays[i];

  total += day;

  return total;
}

int main() {
  int d1, m1, d2, m2;

  cin >> d1 >> m1 >> d2 >> m2;

  int dayOfYear1 = getYearDay(d1, m1);
  int dayOfYear2 = getYearDay(d2, m2);

  cout << dayOfYear2 - dayOfYear1 << endl;

  return 0;
}
