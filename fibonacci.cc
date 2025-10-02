#include <iostream>
using namespace std;

// NOT (!) = valore opposto di quel valore (si usa una una sola variabile)
// AND (&&) = stesso valore restituisce quel valore 
// OR (||) = true se un valore è true
// XOR = true se sono valori diversi (true o false)
// valore booleano:    true = 1     false = 0


// ESERCIZIO 4 (Tutorato 29/09/2025):
int a, b, c, fib;
// Esempio serie di Fibonacci: 1 1 2 3 5 8 13

int main() {
   
    do {
    cout << "Quanti numeri vuoi contare?" << endl;
    cin >> fib;
    } while(fib<=0);
    
    a = 1;
    b = 1;

    for (int x=0; x<fib-2; x++) {
        c=b;
        b=c+a;
        a=c;
    }
    if(fib==1) cout << a;
    else  cout << b;
    return 0;
}