#include <iostream>

int main() {
  /*
   NOTES: This is a tutorial on c++ based on C,
   showing only the new additions that c++ provides.
    - All data types are similar, except strings and booleans.
  */

  bool isMarried = false;

  std::cout << "I like pizza" << '\n';
  std::cout << "It's really good!" << '\n';

  std::string name = "Achraf";
  std::string day = "Friday";
  std::string food = "Pizza";

  std::cout << "Hello" << name << ", he likes" << food;

  return 0;
}