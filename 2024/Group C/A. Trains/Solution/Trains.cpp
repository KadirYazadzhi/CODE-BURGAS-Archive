#include <iostream>

using namespace std;

int main() {
    int firstTrainSpeed, secondTrainSpeed, distance, time, totalTraveledDistance;
    cin >> firstTrainSpeed;
    cin >> secondTrainSpeed;
    cin >> distance;

    time = distance / (firstTrainSpeed + secondTrainSpeed);
    totalTraveledDistance = (firstTrainSpeed * time) + (secondTrainSpeed * time);

    cout << time << endl;
    cout << totalTraveledDistance << endl;
    return 0;
}
