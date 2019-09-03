/* 
 * File:   main.cpp
 * Author: jonathan
 *
 * Created on 3 de septiembre de 2019, 08:17 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int arreglo[8] ={1,3,4,5,17,18,31,33};


int busq(int low, int high, int x);

int main(){

    int low=0, high=7, i,x;
    cin>>x;
    
    i=busq(low,high,x);
    
    if (i==(-1))
        cout<<"no hay, no existe";
    else
        cout<<"Está en el puesto "<<i;
                    return 0;
}

int busq(int low, int high, int x){
    
    //int mid = (low + high) / 2;
    
    if(low > high)
        return(-1);
    int mid=((low+high)/2);
    if(x == arreglo[mid])
        return(mid);
    if(x < arreglo[mid])
        busq(low,mid-1,x);
    else
        busq(mid+1,high,x);
}