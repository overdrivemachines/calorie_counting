#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int calories, max = 0, max1 = 0, max2 = 0, max3 = 0, total_calories = 0;

  // read input
  while (!cin.eof()) {
    // cout << "max1: " << max1 << endl;
    // cout << "max2: " << max2 << endl;
    // cout << "max3: " << max3 << endl;

    cin >> calories;
    total_calories += calories;

    cin.get();             // reads in the new line character \n after the input (on the same line)
    char c2 = cin.peek();  // reads first character of the next line

    if ((c2 == '\n') || (cin.eof())) {
      // end of this elf
      // cout << "total calories: " << total_calories << endl;

      if (total_calories > max1) {
        max3 = max2;
        max2 = max1;
        max1 = total_calories;
      } else if (total_calories > max2) {
        max3 = max2;
        max2 = total_calories;
      } else if (total_calories > max3) {
        max3 = total_calories;
      }

      total_calories = 0;
    }
  }

  cout << "max1: " << max1 << endl;
  cout << "max2: " << max2 << endl;
  cout << "max3: " << max3 << endl;
  cout << "total: " << (max1 + max2 + max3) << endl;
  return 0;
}
