#include <iostream>
#include <Math.h>

using namespace std;



int main() {
    int tamanho;
    int n1[4] = {};
    int* n1 = new int[tamanho];

    for (int c=0; c<=tamanho; c++){
        cout << "Digite o elemento " << c << " do vetor";
        cin >> n1[c];
    }

    cout << "O vetor ficou assim: " << n1; 
}
