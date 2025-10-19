#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x = 22;
    int &ptr = x;

    cout << ptr;
    return 0;
}