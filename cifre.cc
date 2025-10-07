#include <iostream>
using namespace std;

// NOT (!) = valore opposto di quel valore (si usa una una sola variabile)
// AND (&&) = stesso valore restituisce quel valore 
// OR (||) = true se un valore è true
// XOR = true se sono valori diversi (true o false)
// valore booleano:    true = 1     false = 0


// ESERCIZIO 4 (Tutorato 29/09/2025):
int a, b, fib, flag, i;
// Esempio serie di Fibonacci: 1 1 2 3 5 8 13

int main() {

    cout << "Quanti numeri vuoi contare?" << endl;
    cin >> fib;
    

    if (fib==1) {
        cout << a << endl;
    }

    else if (fib==2) {
        flag = a+1
        cout << flag << endl;
    }

    else {
        while (i!=fib) {
        a = fib;
        b = (fib-1)+(a-2);
        i++;
        }
    }
    return 0;
}