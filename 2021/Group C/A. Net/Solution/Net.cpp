#include <iostream>

using namespace std;

const int BYTES = 1024;

int main() {
    int channelSpeed;
    cin >> channelSpeed;

    int fileSizeFirstUser, fileSizeSecondUser;
    cin >> fileSizeFirstUser >> fileSizeSecondUser;

    int delay;
    cin >> delay;

    int aloneSize = channelSpeed * delay;
    int fileSecondSizeLeft = abs(fileSizeSecondUser * BYTES - aloneSize);

    double timeTogether = fileSecondSizeLeft / (channelSpeed / 2);
    double fileFirstSizeLeft = abs(fileSizeFirstUser * BYTES - fileSecondSizeLeft);
    double timeFirstAlone = fileFirstSizeLeft / channelSpeed;

    cout << timeFirstAlone + timeTogether << endl;
    cout << delay + timeTogether << endl;

    return 0;
}
