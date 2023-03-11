#include <iostream>
using namespace std;

int main() {
  // Premier
  if (n != 0) {
    Somme = 0;
    for (int i = 0; i < n; i++) {
      double a;
      cin >> a;
      if (a < (a + 1)) Somme += a;
    }
  }

  // Deuxième
  int n = 10;
  double Somme = 0;
  for (int i = 1; i <= n; i++) {
    Somme += 1.0 / i;
  }
  cout << "Resultat: " << Somme << endl;

  return 0;
}
