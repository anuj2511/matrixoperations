#include<iostream>
#include"matrix.h"

int main(){

    std::cout<<"Entered Main.\n";

    mayur::Matrix A(4,4);
    A.getMatrix();

    mayur::Matrix B(4,4);
    B.getMatrix();

    mayur::Matrix C(4,4), D(4,4), E(4,4);
    
    C = A + B ;
    D = A - B ;
    E = A * B ;

    C.displayMatrix();
    D.displayMatrix();
    E.displayMatrix();
    
    return 0;
}