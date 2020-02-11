#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double A[][N]){
   for(int i=0; i<N; i++){
   cout<<"Row "<<i+1<<": ";
        for(int j=0; j<N; j++){ 
			cin>>A[i][j];
   }
}
}

void findLocalMax(const double A[][N], bool B[][N]){
   for(int i=1;i<N-1;i++){
       for(int j=1;j<N-1;j++){
        if(A[i][j]>=A[i-1][j] && A[i][j]>=A[i+1][j] && A[i][j]>=A[i][j-1] && A[i][j]>=A[i][j+1])
		{B[i][j]=true;
		}
		else{B[i][j]=false;
		}
	   }
   }
    for(int x=0;x<N;x++){B[x][0] = false;}
	for(int y=0;y<N;y++){B[y][N-1] = false;}
	for(int z=0;z<N;z++){B[0][z] = false;}
	for(int xz=0;xz<N;xz++){B[N-1][xz] = false;}
}


void showMatrix(const bool B[][N]){
for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){cout<<B[i][j]<<" ";}
	   cout<<"\n";
}
}

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
