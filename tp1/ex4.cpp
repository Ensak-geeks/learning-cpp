#include <iostream>
using namespace std;

int main() {
  const int len = 10;
  double arr[len];

  for (int i = 0; i < len; i++) {
    cout << "Saisissez la valeur #" << i + 1 << ": ";
    cin >> *(arr + i);
  }

  double* p = arr + 4;

  cout << "Tableau à partir de la 5ème case : ";
  for (int i = 4; i < len; i++) {
    cout << *(p + i - 4) << " ";
  }

  cout << endl;

  return 0;
}
