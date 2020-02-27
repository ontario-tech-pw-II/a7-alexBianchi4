#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	if(interestRate > 0){
		interestRate = rate;
	}else{
		interestRate = 0;
	}

}

double SavingsAccount::calculateInterest(){
	return interestRate;
} 

void SavingsAccount::display(ostream & os) const
{
	os << "``````" << endl << "Account type: Saving" << endl << "Balance: $" << getBalance() << endl
	<< "Interest Rate: " << calculateInterest() <<  "%\n";  
}
