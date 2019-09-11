/* 
 * File:   main.cpp
 * Author: Jonathan Cardona 
 *
 * Created on 10 de septiembre de 2019, 07:18 PM
 */

#include <iostream>
using namespace std;

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

float pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
    return *e;
}

void bottom(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[0];
    }
}

void peek(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        }
}

int main() {
    Pila unaPila;
    int x;
    float in,y=0;
    
    initialize(&unaPila);

    if(empty(&unaPila))
        cout<<"vacia"<<endl;
    
    cout<<"Datos a ingresar a la pila: ";
    cin>>x;
    
    cout<<"Ingrese los datos:"<<endl;
    for (int i=0;i<x;i++){
        cin>>in;
        push(&unaPila, in);
    }
    
    
    bottom(&unaPila,&y);
    cout<<"dato en el fondo: "<<y<<endl;
    
    peek(&unaPila,&y);
    cout<<"dato top: "<<y<<endl;
        
        //leer datos de pila
        cout<<"Datos de la pila:"<<endl;
    while(!empty(&unaPila)){
        pop(&unaPila, &y);
        cout << "y: " << y << endl;
    }
        
    
    //leer dato del fondo destruyendo los demas datos de la pila
    cout<<"Dato del fondo:"<<endl;
    while(!empty(&unaPila)){
        pop(&unaPila, &y);
    }
        cout << "y: " << y << endl;
   
     
       
return 0;}
