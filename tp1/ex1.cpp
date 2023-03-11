#include <iostream>
using namespace std;

int main() {
  int valeurs[10];
  int min;

  for (int i = 0; i < 10; i++) {
    cout << "Entrez la valeur " << i + 1 << " : ";
    cin >> valeurs[i];
  }

  min = valeurs[0];

  for (int i = 1; i < 10; i++) {
    if (valeurs[i] < min) {
      min = valeurs[i];
    }
  }

  cout << "La valeur minimale est : " << min << endl;

  return 0;
}
