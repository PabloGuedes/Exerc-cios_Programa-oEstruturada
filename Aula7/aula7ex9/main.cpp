/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 18 de Maio de 2022, 10:18
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int matriz [2][3];
    int i, j;
    
    for(i=0;i<2; i++){
        for(j=0; j<3; j++){
            cout<< "digite o valor para preencher a matriz [ "<<1<<", "<< j<<" ]"<< endl;
            cin>> matriz[i][j];  
            
            
        }
    }
    
     for(i=0;i<2; i++){
        for(j=0; j<3; j++){
            cout<< matriz[i][j]<< endl;
             
            
            
        }
    }
    return 0;
}

