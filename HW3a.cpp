// The code below will simulate a currency exchange carried out at an exchange office.

#include <iostream>
#include <string>
using namespace std;


float EUR_change_SEK(float moneyEUR) {
	float moneySEK;
	// 1 eur = 9.519527 sek
	moneySEK = 9.519527 * moneyEUR;
	return moneySEK;
}

float SEK_commission(float moneySEK) {
	float commissionSEK;
	// commission 1.5%
	commissionSEK = moneySEK * 0.015;
	return commissionSEK;
}

int main() {
	cout << "Good day customer, the daily EUR-SEK exchange rate is: 1 EUR = 9.519527 SEK. We charge a commission of 1.5%." << endl;
	float moneyEUR;
	cout << "How much money (EUR) would you like to change?" << endl;
	cin >> moneyEUR;
	cout << "The amount you propose is worth (in SEK): " << EUR_change_SEK(moneyEUR) << ". If you agree to proceed with the exchange, you will be detracted a commission of " << SEK_commission(EUR_change_SEK(moneyEUR)) << " SEK." <<endl;
	cout << "Would you like to proceed? ? [y]/[n]" << endl;
	CHOICE:
	char choice;
	cin >> choice;
	if(choice == 'y'){
		cout << "It has been a pleasure doing business with you, have a nice day!";
	}
	else if(choice == 'n'){
		cout << "Come back if you change your mind, have a nice day!";
	}
	else {
		cout << "Please give a valid answer.";
		goto CHOICE;
	}
}
