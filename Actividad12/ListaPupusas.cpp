/* 
 * File:   main.cpp
 * Author: jonathan
 *
 * Created on 8 de octubre de 2019, 11:43 AM
 */

#include <iostream>
#include <vector>
using namespace std;

struct TPedido{
    int FconQ;
    int revueltas;
    int queso;
    int masa;
};
typedef struct TPedido Pedido;

Pedido inOrden(){
    Pedido p;
    cout << "Ordenando... "<<endl;
    cout << "Frijol con queso: "; cin >> p.FconQ;
    cout << "Revueltas: ";   cin >> p.revueltas;
    cout << "Queso: "; cin >> p.queso;
    
    cout << "1)Arroz     2)Maíz" <<endl << "Masa de: "; cin >> p.masa;
    if(p.masa!=1 || p.masa!=2){
    do{  
        cout<<"Opción inválida, ingrese de nuevo: ";
        cin >> p.masa;
    }while(p.masa!=1 && p.masa!=2);}
    return p;
}

void showOrden(Pedido p,int i){
    cout << "Orden #"<<i+1<<endl;
    cout << "Frijol con queso: " << p.FconQ << endl;
    cout << "Revueltas: " << p.revueltas << endl;
    cout << "Queso: " << p.queso << endl;
    cout << "Masa de ";
    if(p.masa==1){
    cout << "arroz.";
    }else{
        cout << "maíz.";
    }
    cout << endl<< endl;
}

vector<Pedido> lista;

void add(){
    Pedido p = inOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    if(lista.size()==0){
        cout<<"Lista vacia, ingresar datos"<<endl;
    }else{
    for (int i = 0; i < lista.size(); i++) 
        showOrden(lista[i],i);
    }
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar orden\n\t2) Ver Pedidos"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: //Agrega una nueva orden/pedido
                add();
            break;
            case 2: //muestra todas las ordenes
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
