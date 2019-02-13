#include<iostream>
#include"matrix.h"

namespace mayur{

    Matrix::Matrix(int i, int j){
	    row = i;
	    column = j;
    }

    //accept matrix
    void Matrix::getMatrix(){
        int i,j;

        for(i=0;i<column;i+=1){
            for(j=0;j<row; j+=1){
                std::cout<<"\nEnter the element no "<<i+1<<" "<<j+1<<".  ";
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


    Matrix Matrix::operator-(Matrix Z){

        matrix Y(3,3);
        int i, j;

        for(i=0;i<column;i+=1){
            for(j=0;j<row; j+=1){
                Y.matrix1[i][j] = matrix[i][j] - Z.matrix[i][j];
            }
        }

    }

    Matrix Matrix::operator*(Matrix Z){

        Matrix Y(3,3);
        int i, j, k;

        for(i=0;i<column;i+=1){
            for(j=0;j<row; j+=1){
                for(k=0; k<3; k+=1){
                Y.matrix[i][j] += matrix[i][k] * Z.matrix[k][j];
                }
            }
        }
    }

}