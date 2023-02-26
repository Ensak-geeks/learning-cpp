#include <iostream>

namespace first {
int x = 1;
}

namespace second {
int x = 2;
}

int main() {
  /*
   NOTES: Namespaces are used to prevent name conflicts in large projects.
      - They allow identically named entities as long as the namespaces are
   different.
  */

  std::cout << first::x << '\n';
  std::cout << second::x << '\n';

  using namespace std;

  cout << "HEY";
  string name = "Bro";

  return 0;
}