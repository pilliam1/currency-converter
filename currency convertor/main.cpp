#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file;
	file.open("currency.txt");

	if (file.fail()) {
		cerr << "error opening file" << endl;
		exit(1);
	}

	float USRate, GBRate, EURate, JAPRate;
	float moneyToConvert;
	cout << "exchange rates \n";
	file >> USRate >> GBRate >> EURate >> JAPRate;
	cout << "US Rate: " << USRate << endl; 
	cout << "GB Rate: " << GBRate << endl;
	cout << "EU Rate: " << EURate << endl; 
	cout << "JAP Rate: " << JAPRate << endl;

	cout << "how many aussie dolloars would you like to convert? ";
	cin >> moneyToConvert;
	cout << moneyToConvert << " aussie dollars is worth " << "$" << moneyToConvert*USRate << " USD"<< endl;
	cout << moneyToConvert << " aussie dollars is worth " << "$" << moneyToConvert*GBRate << " GBP" <<endl;
	cout << moneyToConvert << " aussie dollars is worth " << "$" << moneyToConvert*EURate << " EURO" << endl;
	cout << moneyToConvert << " aussie dollars is worth " << "$" << moneyToConvert*JAPRate << " YEN" << endl;
	system("pause");
}