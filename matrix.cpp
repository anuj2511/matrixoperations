#include<iostream>
#include"matrix.h"

namespace mayur{
    void Matrix::getMatrix(){
        int i,j;

        for(i=0;i<column;i+=1){
            for(j=0;j<row; j+=1){
                std::cout<<"\nEnter the element no "<<i+1<<" and "<<j+1<<" .   ";
                std::cin>>matrix[i][j];
            }
        }

    }

    // display method
    void Matrix::displayMatrix(){
        int i,j; 

        std::cout<<"\n";
        for(i=0;i<column;i+=1){
            for(j=0;j<row; j+=1){
                std::cout<<matrix[i][j]<<" ";
            }
        std::cout<<"\n";
        }

    }

}