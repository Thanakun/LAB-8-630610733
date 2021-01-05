#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double NewBalance;
	int count = 1;
	double Total;
	double interrest_amount;
	double loan;
	double interest_rate;
	double pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(true){
		interrest_amount = ((loan*interest_rate) / 100);
		Total = loan + interrest_amount;
		NewBalance = Total - pay;
		if(Total < pay){
			pay = Total;
			NewBalance = 0;
		}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << count;//นับจำนวนปี 
		cout << setw(13) << left << loan;//PrevBalance
		cout << setw(13) << left << interrest_amount;//
		cout << setw(13) << left << Total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		if(NewBalance == 0) break;
		loan = NewBalance;
		count++;
	}	
	
	return 0;
}
