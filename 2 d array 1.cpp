//Aryan Thorat
#include <iostream>

using namespace std;

int main()
{
	int rows,cols;
	cout<<"Enter the number of rows: "<<endl;
	cin>>rows;
	cout<<"Enter the number of columns: "<<endl;
	cin>>cols;
	int** array = new int*[rows];
	for(int i = 0;i< rows;++i){
		array[i] = new int[cols];
	}
	cout<<"enter the elements of the 2D array: "<<endl;
	for(int i = 0;i<rows;++i){
		for(int j = 0;j<cols;++j){
			cout<<"Elements["<<i<<"]["<<j<<"]:";
			cin>>array[i][j];
		}
	}
	cout<<"The 2D array is: "<<endl;
	for (int i=0;i<rows;++i){
		for(int j=0;j<cols;++j){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}
/*Enter the number of rows: 
2
Enter the number of columns: 
2
enter the elements of the 2D array: 
Elements[0][0]:1
Elements[0][1]:5
Elements[1][0]:6
Elements[1][1]:4
The 2D array is: 
1 5 
6 4 */