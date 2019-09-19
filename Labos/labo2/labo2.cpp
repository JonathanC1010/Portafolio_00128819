/* Jonathan Alexis Cardona Garcia 00128819
 *
 *
 * Created on 18 de septiembre de 2019, 7:21 AM
 */

#include<iostream>
using namespace std;
//Ejercicio 12
/*
int cor(int n, int k){
    int r;
   
    if(k>=0){
    if(k==0){
        return 1;
    }
    else if(n==k){
        return 1;
    }
    else if(n>k){
        r=cor(n-1,k) + cor(n-1,k-1);
        return r;
    }
    }
    else{
        return -1;
    }
    
}

int main()
{
	int n = 0, k = 0;
	cout << "Ingrese el vakor de n: ";
	cin >> n;

	cout << "Ingrese el valor de k: ";
	cin >> k;

	cout << "El valor de C: (" << n << ", "<< k << ") es:  ";
        if(cor(n, k)>=0)
            cout<<cor(n, k);
        else
            cout<<"Indeterminado";
        
	return 0;
}
 */
//Ejercicio 13
//Este ejercicio suma todos los números anteriores al número ingresado y se detiene en cero
//Ejercio iterativo
/*
int func(int n){
    int p=0;
    for(int i=0;i<n+1;i++){
        p+=i;
    }
    return p;
}
int main(){
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    cout << "El resultado es: " << func(n);
    return 0;
}
*/

//Ejercicio 14
/*
int main(){
    int x,y,w,z;
    cout<<"Ingrese cantidad de filas: "; cin>>x;
    cout<<"Ingrese cantidad de columnas: "; cin>>y;
    int a[x][y];
    
    cout<<"Ingrese datos:"<<endl; 
    for(int i=0;i<x;i++){ 
        for(int j=0;j<y;j++){ 
            cin>>a[i][j];
        }
    }
    
    cout<<"Fila a eliminar: "; cin>>w;
    cout<<"Columna a eliminar: "; cin>>z;
    
    cout<<"Datos ingresados"<<endl;
    for(int i=0;i<x;i++){ 
        for(int j=0;j<y;j++){ 
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    cout<<"Matriz modificada"<<endl;
    for(int i=0;i<x;i++){ 
        if(i!=w-1){
            for(int j=0;j<y;j++){ 
                if(j!=z-1)
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    
}
