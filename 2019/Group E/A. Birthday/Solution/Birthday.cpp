#include <iostream>

using namespace std;

int days(int month) {
  const int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  return days[month];
}

int main() {
  int firstDay, secondDay, firstMonth, secondMonth, daysToBirthday = 0;

  cin >> firstDay >> firstMonth;
  cin >> secondDay >> secondMonth;

  if (firstMonth == secondMonth) daysToBirthday = secondDay - firstDay;
  else daysToBirthday = (days(firstMonth) - firstDay) + (days(secondMonth) - secondDay);


  cout << daysToBirthday << endl;

  return 0;
}
