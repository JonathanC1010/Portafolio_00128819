/* 
 * File:   main.cpp
 * Author: jonathan
 *
 * Created on 6 de octubre de 2019, 07:28 PM
 */

#include <iostream>
using namespace std;

int Cola[5];
int frente = -1, atras = -1, n=5;//cola del tamaño de n

void in(int b) {
   if (frente == -1) {
      frente = 0;
      atras = 0;
   } else {
      if (atras == n - 1)
      atras = 0;
      else
      atras = atras + 1;
   }
   Cola[atras] = b ;
}
void borrar() {
   if (frente == -1) {
      cout<<"Cola Underflow\n";
      return ;
   }
   cout<<"El elemento eliminado de la cola es : "<<Cola[frente]<<endl;

   if (frente == atras) {
      frente = -1;
      atras = -1;
   } else {
      if (frente == n - 1)
      frente = 0;
      else
      frente = frente + 1;
   }
}
void show() {
   int f = frente, r = atras;
   if (frente == -1) {
      cout<<"La cola esta vacia"<<endl;
      return;
   }
   cout<<"Los elementos de la cola son :\n";
   if (f <= r) {
      while (f <= r){
         cout<<Cola[f]<<" ";
         f++;
      }
   } else {
      while (f <= n - 1) {
         cout<<Cola[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<Cola[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
void menu(){
   cout<<"1)Insertar un elemento\n";
   cout<<"2)Borrar último elemento\n";
   cout<<"3)Mostrar Cola\n";
   cout<<"4)Salir\n";
}

int main() {

   int a, x;
   
    do {
        menu();
        cout<<"Ingrese una opcion : "<<endl;
        cin>>a;
        switch(a) {
            case 1:
                if ((frente == 0 && atras == n-1) || (frente == atras+1)) {
                    cout<<"La cola esta llena, elegir otra opción \n"; break;}
                else{
                    cout<<"Numero a insertar: "<<endl;
                    
                cin>>x;
                in(x);}
            break;

            case 2:
                borrar(); break;

            case 3:
                show(); break;

            case 4:
                cout<<"Salir\n"; break;
                
            default: cout<<"Por favor elegir una opción válida\n";
                }
        cout<<endl;
    }
    while(a != 4);
    
   return 0;
}