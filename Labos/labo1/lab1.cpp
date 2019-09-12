//Jonathan Alexis Cardona Garcia 00128819
//9:37PM    9/11/19

#include <iostream>
#include <cstring>
        
using namespace std;

//21 matriz
/*
int main(){

    int m[5][5],i,j;
//x = tamaño de matriz
    int x=5;

//Se inicializan todos a 0
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            m[i][j]=0;
        }
    }
    
//El usuario ingresa los datos
   for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            if(i>j){
                cout<<"ingrese datos para i "<<i<<" y j "<<j<<": ";
                cin>>m[i][j];
            }
        }
    }

//Se imprimen la matriz
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
        cout<<m[i][j]<<" ";
        }
        cout<<""<<endl;
    }


    return 0;
}
 */

//27 multiplicacion de complejos
/*int main(){

    struct com{
        int r;
        int i;
    };
    
    com a,b,x;
    
    cout<<"Ingrese a: ";
    cin>>a.r>>a.i;
    
    cout<<"Ingrese b: ";
    cin>>b.r>>b.i;
    
    x.r = (a.r * b.r)-(a.i * b.i) ;
    x.i = (a.r * b.i)+(a.i * b.r);
    
    cout<<x.r<<" + "<<x.i<<"j";
    
    return 0;
}
 */

//4 murcielago
/*
void clave(char *p, int l){
    for(int i=0;i<l;i++){
        switch(*p){
            case 'm':
                cout<<"0"; break;
            case 'u':
                cout<<"1"; break;
            case 'r':
                cout<<"2"; break;
            case 'c':
                cout<<"3"; break;
            case 'i':
                cout<<"4"; break;
            case 'e':
                cout<<"5"; break;
            case 'l':
                cout<<"6"; break;
            case 'a':
                cout<<"7"; break;
            case 'g':
                cout<<"8"; break;
            case 'o':
                cout<<"9"; break;
            default: 
                cout<<*p; break;
        }
        *(p++);
    }}
int main(){
    char arr[]= "hola mundo";
    int r;
    char *p=arr;
    r = sizeof(arr);
    clave(p, r);
return 0;}
*/

//14 palabra palindrome
void palindrome(char *p, int l){
    int j=l,h=0;
    
    for(int i=0;i<l;i++){
        j--;
        if(p[i]!=p[j]){
            cout<<"No es palindrome"; break;
        }
        else{
            h++;
        }
    }
    if (h==l)
        cout<<"Es palindrome";
}
int main(){
    int k;
    cout<<"Número de letras en la palabra a ingresar: ";
    cin>>k;
    cout<<"Palabra a verificar: ";
    char pal[k];
    cin>>pal;
    
    char *p=pal;
    palindrome(p,k);
     
return 0;
}