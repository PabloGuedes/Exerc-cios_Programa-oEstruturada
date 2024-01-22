/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 10:05
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    int vetor[10],i;
    
    for(i=0; i<10; i++){
        cout<<"digite um numero"<<endl;
        cin>>vetor[i];
    }
    for(i=0; i<10; i++){
        if(vetor[i] %2==0){
            cout<< "par"<<endl;
      
        }
        else{
        cout<<"impar"<<endl;
        }
   
    }
    return 0;
}