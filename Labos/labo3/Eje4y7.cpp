/* 
 * File:   main.cpp
 * Author: jonathan
 *
 * Created on 10 de octubre de 2019, 11:56 AM
 */

#include <iostream>
#include <cstdlib>
using namespace std;
int contador=0;

struct nodo{
	int dato;
	struct nodo *sig;
};

void menu();
nodo *crearNodo();
void mostrarLista(nodo *inicio);
void borrardelista(nodo *&ini);
void pares(nodo *inicio);
void insertarNodoFinal(nodo *&nuevo, nodo *&ini, nodo *&actual);
void insertarNodoInicio(nodo *&nuevo, nodo *&ini);


int main(){
	//este puntero se va a quedar siempre en el primer nodo de la lista
	nodo *inicio=NULL;
	//Este puntero siempre estara en el ultimo nodo que sea ingresado
	nodo *nodoActual=NULL;
	int opcion;
	nodo *aux=NULL;
	
	do{
		menu();
		cout << "ingrese opcion: ";
		cin >> opcion;
		switch(opcion){
			case 0:		cout << "saliendo del programa... :D" << endl;
						break;
			case 1:		aux=crearNodo();
			 			insertarNodoFinal(aux,inicio,nodoActual);
						aux=NULL;
						break;
			case 2:		aux=crearNodo();
			 			insertarNodoInicio(aux,inicio);
						aux=NULL;
						break;
			case 3:		mostrarLista(inicio);
						break;
			case 4:		pares(inicio);
						break;
			case 5:		borrardelista(inicio);
						break;
			
			default:	cout << "opcion invalida...."  << endl;
						break;
		}
	}while(opcion != 0);
	
	
	return 0;
}

void menu(){
	cout << "*************** MENU ***************" << endl;
	cout << "\t0 - salir" << endl;
	cout << "\t1 - insertar nodo a la lista (al final)" << endl;
	cout << "\t2 - insertar nodo a la lista (al inicio)" << endl;
	cout << "\t3 - mostrar lista" << endl;
	cout << "\t4 - sumatoria de pares e impares" << endl;
	cout << "\t5 - eliminar un número de la lista" << endl << endl;
}

nodo *crearNodo(){
	nodo *nuevo_nodo = new nodo();
	cout<<"Ingrese el dato: ";
	cin>>nuevo_nodo->dato;
	nuevo_nodo->sig=NULL;
	return nuevo_nodo;
}
//Al nosotros poner *inicio pasamos unacopia de lo que tiene el puntero
//si pusieramos *&inicio mandariamos el contenido original
void mostrarLista(nodo *inicio){
    while(inicio!=NULL){
                cout<<inicio->dato;
		cout<<"->";
		inicio=inicio->sig;
        }
        cout<<"NULL"<<endl;
}

void borrardelista(nodo *&ini){
    int a;
    cout<<"Ingrese dato a borrar: ";
    cin>>a;
    
    nodo *p = ini, *q = NULL;
    while(true){
    while(p != NULL && p->dato != a){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Ya no se encontraron datos como el solicitado..." << endl;
        break;
    }
    if(q == NULL)
        ini = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Dato borrado!" << endl;}
}

void pares(nodo *inicio){
int par=0,impar=0;	
    while(inicio!=NULL){
            if(inicio->dato%2==0){
                par+=inicio->dato;
            }
            else{
                impar+=inicio->dato;
            }	
		inicio=inicio->sig;    
    }
        cout<<"La sumatoria de los números pares es: "<<par<<endl;
        cout<<"La sumatoria de los números impares es: "<<impar<<endl;
}

void insertarNodoFinal(nodo *&nuevo, nodo *&ini, nodo *&actual){	
	if(ini==NULL){//si es el primer nodo que ingresamos
		//apuntamos al primero
		ini = nuevo;
		//al ser el primero el unico nodo, actual tambien es el primero
		actual=nuevo;
	}else{
		//Ahora que ya hay mas de un nodo
		actual->sig = nuevo;
		actual = actual->sig;
	}
}

void insertarNodoInicio(nodo *&nuevo, nodo *&ini){	
	//El puntero "siguiente" del nuevo nodo apuntara a donde apunta el nodo inicial
	nuevo->sig = ini;
	//Ahora que ya enlazamos el puntero "Siguiente" del nuevo nodo falta decir que el nuevo nodo inicial sera el que acabamos de ingresar
	ini = nuevo;	
}