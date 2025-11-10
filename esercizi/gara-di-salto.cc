#include <iostream>
using namespace std;

double jump () {
    do {
        salto = rand();
    } while (salto>1.0 && salto<3.0);

    return salto;
}

int round (double salto1, double salto2, double salto3) {
    int vincetoreRound = 0;
    if (salto1>=salto2){
        if (salto1>=salto3) {
            vincitoreRound = 1;
        }
    }
    else if (salto2>=salto3) {
        vincitoreRound = 2;
    }
    else {
        vincitoreRound = 3;
    }
    return vincetoreRound;
}


int main() {
    srand(time(NULL));
    
    double salto1 = jump();
    double salto2 = jump();
    double salto3 = jump();

    cout << round (salto1, salto2, salto3);




    return 0;
}