/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 09:05
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int tamanho = 5;
    float notas [tamanho], media = 0.0;
    int i;
    
    cout<<setprecision(2);
    
    for(i=0; i<tamanho; i++){
        cout <<"digite a nota do aluna" <<(i+1)<< endl;
        
        cin>> notas[i];
        media += notas[i];
        
    }
    
    cout <<"media notas"<<(media/tamanho)<<endl;
    return 0;
}

