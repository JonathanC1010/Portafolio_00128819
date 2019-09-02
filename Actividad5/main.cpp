/* 
 * File:   multiplicacion recursiva.cpp
 * Authors: Jonathan Alexis Cardona Garcia 00128819
 *          Oscar Alfredo Cañas Mendez     00096819
 *
 * Created on 29 de agosto de 2019, 07:59 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int multip(int a, int b){
	if(b==1){
            cout<<"b = 1  "<<"base se retorna a: "<<a<<endl;
		return a;
	}else{
		int y = b-1;
                cout<<"y="<<y<<"  a="<<a<<"  b="<<b<<endl;
		return a+multip(a,y);
	}
}


int main()
{
	cout << "ingrese los datos:"<<endl;
	int a, b,res;
        cin>>a; cin>>b;
        
                res = multip(a,b);
	cout << "Resultado: " << res << endl;
	
}