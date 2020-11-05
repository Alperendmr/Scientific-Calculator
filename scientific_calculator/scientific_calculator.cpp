#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int op;

void sum() {

	system("cls");
	system("color 1E");

	double sum = 0;
	double n;
	double numberitems;

	cout << "\n\nYou have chosen addition... \n\n";

	cout << "Enter number of items: ";
	cin >> numberitems;

	for (int i = 1; i <= numberitems; i++) {

		cout << "\nEnter number " << i << ": " << endl;
		
		cin >> n;
		sum += n;
	}//end of for

	cout << endl;

	cout << "The summation is:" << sum << endl << endl;
}// end of sum func

void diff() {

	system("cls");
	system("color 1A");

	double diff;
	double n1, n2;

	cout << "\n\nYou have choosen difference...\n\n";
	
	cout << "Please enter TWO numbers one after the other: " << endl;
	cin >> n1 >> n2;

	diff = n1 - n2;

	cout << endl;

	cout << "The difference between " << n1 << " and " << n2 << " is: " << diff << endl << endl;

}// end of diff func


void pro() {

	system("cls");
	system("color 1C");

	double pro = 1;
	double n;
	double numberitems;

	cout << "\n\nYou have chosen multiplication...\n\n";

	cout << "Enter the number of items: ";
	cin >> numberitems;

	for (int i = 0; i < numberitems; i++) {

		cout << "\nEnter numbers: ";
		cin >> n;

		pro *= n;
	}// end of for

	cout << endl;
	cout << "The product is: " << pro << endl << endl;
}// end of pro func


void div() {

	system("cls");
	system("color 1B");
	
	double div;
	double n1, n2;

	cout << "\nYou have chosen division...\n\n";

	cout << "Enter TWO numbers to find their quotient: \n\n";
	
	cout << "Enter numerator: ";
	cin >> n1;
	cout << "\nEnter denominator: ";
	cin >> n2;

	div = n1 / n2;

	cout << "\nQuotient for " << n1 << " over " << n2 << " is: " << div << endl << endl;

}// end of div func


void pow() {

	system("cls");
	system("color 17");

	double p;
	double res = 1;
	double n;

	cout << "\nYou have chosen power calculation...\n\n";

	cout << "Enter the base number: ";
	cin >> n;

	cout << "Enter the power: ";
	cin >> p;

	for (int i = 1; i <= p; i++) {

		res = n * res;
	}// end of for
	cout << endl;
	cout << n << "^" << p << " is: " << res << endl;

}// end of pow func


void sq() {

	system("cls");
	system("color 1D");

	double s;
	double n;

	cout << "\nYou have chosen square root...\n\n";

	cout << "Enter number to find its square root: ";
	cin >> n;

	s = sqrt(n);

	cout << "\nsquare of root of " << n << " is: " << s << endl;

}// end of sq func


void fact() {

	system("cls");
	system("color 17");

	long int f = 1;
	int c = 1, n;

	cout << "\nYou have chosen factorial...\n\n";

	cout << "Enter number to find its factorial: ";
	cin >> n;

	while (c <= n) {

		f = f * c;
		c ++;

	}// end of while

	cout << "\nFactorial of " << n << " is: " << f << endl;
}// end of fact func


void expo() {

	system("cls");
	system("color 1A");

	long double res = 1, p;
	double e = 2.718281828;

	cout << "\nYou have chosen exponential calculate...\n\n";

	cout << "Enter power of exponential function: ";
	cin >> p;

	for (int i = 1; i <= p; i++) {

		res = e * res;

	}//end of for

	cout << " e^ " << p << " is: " << res << endl;

}// end of expo func

int main() {

	system("cls");

	do {

		system("pause");
		system("cls");
		system("color 1F");


		cout << "\t\t\t   -----------> SCIENTIFIC CALCULATOR V1.2 <-----------\n\n";
		cout << "\t\t=======================================================================\n";
		cout << "\t\t\t|******** Which operation do you want to calculate? ********|\n\n";
		cout << "\t\t\t\t>|    Press '0' for exit\n\n";
		cout << "\t\t\t\t>|    Press '1' for addition \n\n";
		cout << "\t\t\t\t>|    Press '2' for substraction \n\n";
		cout << "\t\t\t\t>|    Press '3' for multiplication \n\n";
		cout << "\t\t\t\t>|    Press '4' for division \n\n";
		cout << "\t\t\t\t>|    Press '5' for power calculation \n\n";
		cout << "\t\t\t\t>|    Press '6' for square root \n\n";
		cout << "\t\t\t\t>|    Press '7' for factorial calculation \n\n";
		cout << "\t\t\t\t>|    Press '8' for exponential calculation \n";
		cout << "\t\t=======================================================================\n\n";
		
		cout << "Enter your option 0-8 : ";
		cin >> op;

		while (op > 9) {
			cout << "\nInvalid input, try again...\n\n";
			cout << "Enter your option 0-8 : ";
			cin >> op;
		}

		switch (op) {

			case 1:
				sum();
				break;
			
			case 2:
				diff();
				break;

			case 3:
				pro();
				break;

			case 4:
				div();
				break;

			case 5:
				pow();
				break;

			case 6:
				sq();
				break;

			case 7:
				fact();
				break;

			case 8:
				expo();
				break;

			case 0:
				exit(0);
				break;

			default:
				cout << "Invalid input... \n";
				break;
				system("cls");


		}//end of switch


	}// end of do

	while (op != 0);

	system("pause");
}// end of main











