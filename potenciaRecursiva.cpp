#include <iostream>

int potenciaRecursiva(int x, int n);
using namespace std;

int main() {


    cout<< potenciaRecursiva(2,7) <<endl;


    return 0;
}

int potenciaRecursiva(int n, int e) {
    if(e == 0) {
        return 1;
    }
    else {
        int aux = potenciaRecursiva(n,(e/2));
        if (e % 2 == 0)
            return aux*aux;
        else
            return n*aux*aux;
    }
}
