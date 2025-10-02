#include <iostream>
using namespace std;

int main() {
    

    cout << "Immetti un carattere: ";
    cin >> lettera;
    
    if (lettera>='a' && lettera<='z')  {
        lettera -= 'a'-'A';
        cout << "È una lettera minuscola " << endl;
        cout << "Ecco la lettera Maiuscola... ";
        
        cout << lettera << endl;
    }
    else {
        lettera += 'a'-'A';
        cout << "È una lettera Maiuscola" << endl;
        cout << "Ecco la lettera minuscola... ";
        cout << lettera << endl;
    }

    return 0;
}