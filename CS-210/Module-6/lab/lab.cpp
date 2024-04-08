#include <string>

#include <iostream>

#include <limits>

using namespace std;

int main() {
  string inputName;
  int age;
  // Set exception mask for cin stream
  cin.exceptions(ios::failbit);

  cin >> inputName;
  while (inputName != "-1") {

    try {
      cin >> age;
    } catch (ios_base::failure) {
      age = -1;
      cin.clear();
      cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    }

    cout << inputName << " " << (age + 1) << endl;

    cin >> inputName;
  }

  return 0;
}