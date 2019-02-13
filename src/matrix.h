namespace mayur{

    class Matrix{
     	private :
		float matrix[10][10];
		int row, column;
	
	public :
		Matrix(int,int);
		
        void getMatrix();
		void displayMatrix(); 
		
        Matrix operator+(Matrix);
		Matrix operator-(Matrix);
		Matrix operator*(Matrix);
    
    };
}