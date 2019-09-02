/* 
 * File:   main.cpp
 * Author: Jonathan Alexis Cardona Garcia 00128819
 *
 * Created on 20 de agosto de 2019, 08:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(void) {

    int n, m[20];
    double x;
    
    cout<<"¿Cuantos digitos se ingresaran?"<<endl;
    cout<<"(Deben ser ingresados en orden)"<<endl;
        cin>>n;
    cout<<"Ingresar datos:"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    
    if (n%2==0){
        //Es cantidad par de datos
        x=(m[n/2-1]+m[n/2]);
        cout<<"La media es: "<<x/2;
    }
    else{
        //Es cantidad impar de datos
        cout<<"La media es: "<<m[n/2];
    }
    
    return 0;
}

