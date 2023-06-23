#include <iostream>
using namespace std;
const int size=10;

multiply(int arr1[][size], int arr2[][size], int result[][size],
int row, int col)
{
for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
	result[i][j] = arr1[i][j] * arr2[i][j];
	}
}	
}

display(int arr[][size], int row, int col){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

int main(){
	int arr1[size][size];
	int arr2[size][size];
	int result[size][size];
	int row, col;
	cout<<"Enter size of rows of arrays: ";
	cin>>row;
	cout<<"Enter size of columns of arrays: ";
	cin>>col;
	
	// initializing array 1
	cout<<"Enter element for array 1"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
	cout<<"Enter element for ["<<i<<"]["<<j<<"]: ";
	cin>>arr1[i][j];
		}
	}
	
		// initializing array 2
		cout<<endl;
		cout<<"Enter element for array 2"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
	cout<<"Enter element for ["<<i<<"]["<<j<<"]: ";
	cin>>arr2[i][j];
		}
	}
	
	cout<<"Array 1"<<endl;
	display(arr1, row, col);
	
	cout<<"Array 2"<<endl;
	display(arr2, row, col);
	
	cout<<"Result "<<endl;
	multiply(arr1, arr2, result, row, col);
	display(result, row, col);
}
