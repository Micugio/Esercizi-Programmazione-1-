#include <iostream>
using namespace std;

int main() {
    double x, *pd, **hp;

    cin >> x;

    pd = &x; //inizializzo puntatore che punta a x (prende indirizzo di x)
    cout << "valore puntatore pd: " << *pd << endl; //stampa valore puntatore quindi valore di x
    *pd = 2*(*pd);
    cout << x << endl;

    hp = &pd;
    **hp = (**hp)/5;
    cout << x << endl;

    return 0;
}