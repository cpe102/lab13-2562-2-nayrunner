#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
int i,j;

for(i=1;i<N;i++){
    j=i-1;

        while(j>=0 && d[i]>d[j])
	    {
			
			//print		
			for(int see = 0; see < 10; see++) {
			if(see==i){cout<<"["<<d[see]<<"] ";}
			else cout << d[see] << " ";
			}
		    cout<<" => "; 
			
			


		swap(d,i,j);
	    j--;
		i--;
		

			    //print		
			for(int see = 0; see < 10; see++) {
			if(see==i){cout<<"["<<d[see]<<"] ";}
			else cout << d[see] << " ";
			}
		cout<<"\n";
		}
		       
		
		


}
}





int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
