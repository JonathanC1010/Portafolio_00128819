//eje #2 de la guia #4

#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *izq;
    Nodo *der;
};

Nodo *T;

Nodo* crearNodo(){
    Nodo* n = (Nodo*) malloc(sizeof(Nodo));
    if(n == NULL){
        cout << "I QUIT";
        exit(0);
    }
    return n;
}

void inicializarArbol(){
    T = NULL;
}

bool estaVacio(Nodo* T){
    if(T == NULL) return true;
    else return false;
}

Nodo* inicializarNodo(int n){
    Nodo* temp = crearNodo();
    temp->dato = n;
    temp->izq = temp->der = NULL;
    return temp;
}

int sumaNodos(Nodo *T){
    if(T!=NULL){
        int raiz = T->dato;
        int izq = sumaNodos(T->izq);
        int der = sumaNodos(T->der);
        return raiz+izq+der;
    }
}

int SumaImpar(Nodo *T){
    if(T!=NULL){
        int M=0;
        if(T->dato%2!=0) M = T->dato;
        return M + SumaImpar(T->izq) + SumaImpar(T->der);
    }
    else{
        return 0;
    }
}

int SumaPar(Nodo *T){
    if(T!=NULL){
        int M=0;
        if(T->dato%2==0) M = T->dato;
        return M + SumaPar(T->izq) + SumaPar(T->der);
    }
    else{
        return 0;
    }
}

int CuentaPar(Nodo *T){
    if(T!=NULL){
        int M=0;
        if(T->dato%2==0) M+=1;
        return M + CuentaPar(T->izq) + CuentaPar(T->der);
    }
    else{
        return 0;
    }
}

int CuentaImpar(Nodo *T){
    if(T!=NULL){
        int M=0;
        if(T->dato%2!=0) M+=1;
        return M + CuentaImpar(T->izq) + CuentaImpar(T->der);
    }
    else{
        return 0;
    }
}

void mostrarArbol(Nodo* T){
    if(estaVacio(T)) return;
    cout << T->dato << " - ";
    mostrarArbol(T->izq);
    mostrarArbol(T->der);
}


int main()
{
    inicializarArbol();

    Nodo* n6 = inicializarNodo(15);
    Nodo* n5 = inicializarNodo(10);
    Nodo* n4 = inicializarNodo(69);
    Nodo* n3 = inicializarNodo(12);
    Nodo* n2 = inicializarNodo(34);
    Nodo* n1 = inicializarNodo(4);

    T = n1; n1->izq = n2; n1->der = n3;
    n2->izq = n4; n2->der = n5; n3->izq = n6;

    cout <<"Arbol a usar: ";
    mostrarArbol(T);
    cout <<endl<< "El total de sumar todos los nodos es: " << sumaNodos(T) << endl;
    cout <<"Suma de impares: " << SumaImpar(T)<<". Suma de pares: " << SumaPar(T)<<endl;
    cout <<"Cantidad de impares: " << CuentaImpar(T)<<". Cantidad de pares: " << CuentaPar(T)<<endl;

    return 0;
}
