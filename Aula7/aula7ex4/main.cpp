/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 08:52
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int notas [5], i;
    double media = 0;
    
    for(i=0; i<5; i++){
        cout <<"digite a nota do aluna" <<(i+1)<< endl;
        
        cin>> notas[i];
        media += notas[i];
        
    }
    
    cout <<"media notas"<<(media/5)<<endl;
    return 0;
}

