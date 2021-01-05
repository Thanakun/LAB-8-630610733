#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int N,int M){
	if(N > 0 && M > 0){
		for(int column = 0; column < N; column++){
			for(int count = 0; count < M; count ++){
				cout << "O";
			}
			cout << "\n";
		}
	}else{
		cout << "Invalid input";
	}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
