/* 
 * Author: Jonathan Alexis Cardona Garcia 00128819
 *
 * Created on 27 de agosto de 2019, 04:12 PM
 */

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

struct info_pais {//el struct para la info de cada pais
  string name;
  string capital;
  int poblacion;
} pais [5];//# de paises a ingresar


//RECORDATORIO: hasta abajo están las funciones
void numcont (int i);

int main ()
{
  string pob, paismayor[5],paistop;
  int n, i=0, p_total, mayor[5],top;
  
  while(i<5){
      cout<<"Continente de "; numcont (i);//imprime el continente
      cout<<""<<endl;
  
  for (n=0; n<5; n++){//se ingresan los datos
    cout<<"Ingrese el "<<n+1<<"° país: ";
    getline (cin,pais[n].name);
    cout << "Ingrese la capital: ";
    getline (cin,pais[n].capital);
    cout << "Ingrese la población: ";
    //cin>>pais[n].poblacion;
    getline (cin,pob);
    stringstream(pob) >> pais[n].poblacion;
  }
  
  //total de poblacion en el continente
  p_total=pais[0].poblacion+pais[1].poblacion+pais[2].poblacion+pais[3].poblacion+pais[4].poblacion;
  cout<<"En el continente de "; numcont(i); cout<<" hay una poblacion total de "<<p_total<<endl<<endl;
  
  //se saca el pais con la mayor poblacion del actual continente
    mayor[i]=1;
    for(int j=0;j<5;j++){
    if (pais[j].poblacion>mayor[i]){
        paismayor[i]=pais[j].name;
        mayor[i]=pais[j].poblacion;} }
        //cout<<"Y el pais de "<<paismayor[i]<<" tiene la mayor poblacion del continente"<<endl<<endl; 
  
  i++;
  }
  
  //se saca el pais con mayor poblacion del mundo
  top=1;
    for(int j=0;j<5;j++){
    if (mayor[j]>top){
        paistop=paismayor[j];
        top=mayor[j];} }
        cout<<"Y el pais de "<<paistop<<" tiene la mayor poblacion a nivel mundial"<<endl; 
  
  return 0;
}


void numcont (int i){
switch (i){
          case 0: cout<<"Asia";
              break;
          case 1: cout<<"América";
                  break;
          case 2: cout<<"África";
                  break;
          case 3: cout<<"Europa";
                  break;
          case 4: cout<<"Oceanía";
                  break;
      }
}
