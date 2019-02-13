#ifndef MATRIX_H
#define MATRIX_H

namespace mayur{

    class Matrix{
     	
	protected :
		float matrix[10][10];
		int row, column;
	
	public :
		Matrix();
		Matrix(int,int);
		
        void getMatrix();
		void displayMatrix(); 
		
        friend Matrix operator+(Matrix, Matrix);
		friend Matrix operator-(Matrix, Matrix);
		friend Matrix operator*(Matrix, Matrix);
    
    };
}

#endif
