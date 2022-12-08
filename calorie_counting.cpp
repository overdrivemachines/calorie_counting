#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int calories, max = 0, max1 = 0, max2 = 0, max3 = 0, total_calories = 0;

  // read input
  while (!cin.eof()) {
    cin >> calories;
    // cout << "calories: " << calories << endl;
    total_calories += calories;
    if (max < total_calories)
      max = total_calories;

    cin.get();             // reads in the new line character \n after the input (on the same line)
    char c2 = cin.peek();  // reads first character of the next line

    if (c2 == '\n') {
      // end of this elf
      total_calories = 0;
    }
  }

  cout << max << endl;
  return 0;
}
