#include <iostream>
using namespace std;

int Fib(int x) {
    if(x <= 1) 
        return x;
    else
        return Fib(x-1) + Fib(x-2);
}

int main() {


    // Omoguciti da se ne mogu unijeti negativni brojevi
    int x;
    do {
        cout << "Unesite clan Fibonacci niza: ";
        cin >> x;
        if(x < 0) cout << "[GREKSA]\n";
    } while(x < 0);

    cout << Fib(x);

    system("pause");
    return 0;
}