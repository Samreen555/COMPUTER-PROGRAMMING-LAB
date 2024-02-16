/*#include<iostream>
#include<iomanip>
using namespace std;
/*
* reverse the number
int reverse(int a); //function prototype
int main()
{
	int a;
	cout << "ENTER A NUMBER:";
	cin >> a;
	cout << "REVERSE IS:" << endl << reverse(a); //function call
	system("pause");
	return 0;
}
int reverse(int a) //function defination
{
	int rev=0;
	for (int rem = 0; rem = a % 10; rem++) //for loop for rem
	{
		rev = rev * 10 + rem;
		a /= 10;
	}
	return rev;
}
*/
/*
* Calculate power of a number.
double power(double n,int p=2); //function prototype
int main()
{
	int b,p=2;
	cout << "ENTER A NUMBER:";
	cin >> b;
	cout << "power of the number\t" << b << "\tis:" << power(b,p)<<endl; //function call
	system("pause");
	return 0;
}
double power(double n, int p)//function defination
{
	int num = n *n;
	return num;
}*/
/*
* Conversion of upper case letters to lower case.
char uppercase(char lowercase); //function prototype
int main()
{
	char letter;
	cout << "ENTER A LOWERCASE LETTER:" << endl;
	cin >> letter;
	cout << "UPPERCASE LETTER IS:" << uppercase(letter)<<endl; //function call
	system("pause");
	return 0;
}
char uppercase(char lowercase)
{
	if (islower(lowercase)) {
		return toupper(lowercase);
	}
}*/
/*
* Comparison of two numbers
int campare(int a, int b); //function prototype
int main()
{
	int num1, num2;
	cout << "ENTER THE NUMBERS:" << endl;
	cin >> num1 >> num2;
	campare(num1, num2); //function call
	system("pause");
	return 0;
}
int campare(int a, int b)
{
	if (a> b)
		cout << a<<" "<<"LARGEST NUMBER";
	else
		cout <<"\n "<<b << " " << "LARGEST NUMBER" << endl;
	return 0;
}*/
/*
// function to calculate parking charges
int calculatecharges(int hours); //function prototype
int main() {
	//input for three users
	int hour1, hour2, hour3;
	cout << "ENTER THE HOURS:" << endl;
	cin >> hour1 >> hour2 >> hour3;
	// calculate charges for each one
	int charge1 = calculatecharges(hour1); //function call
	int charge2 = calculatecharges(hour2); //function call
	int charge3 = calculatecharges(hour3); //function call
	//display in tabular form
	int totalhours = hour1 + hour2 + hour3;
	int totalcharges = charge1 + charge2 + charge3;
	cout << "\nCARS" << "\t" << "HOURS" << "\t" << "CHARGES" << endl;
	cout << "1\t" << hour1 << "\t" << charge1 << endl;
	cout << "\n2\t" << hour2 << "\t" << charge2 << endl;
	cout << "\n3\t" << hour3<< "\t" << charge3 << endl;
	cout << "\n TOTAL\t" << totalhours << "\t" << totalcharges << endl;
	system("pause");
	return 0;
}
int calculatecharges(int hours) {
	const float minimumfee = 2;
	const float hourlyrate = 0.50;
	const float maxcharge = 10.00;
	// minimum charge
	int totalcharge = minimumfee;
	// additional charges for hours exceeding 3 hours
	if (hours > 3.0) {
		totalcharge += (hours - 3.0) * hourlyrate;
	}
	//charge to the maximum allowed
	if (totalcharge > maxcharge) {
		totalcharge = maxcharge;
	}
	return totalcharge;
}
int main()
{
	int initial_quantity, current_quantity, threshold, restock_quantity, sold_quantity;
	cout << "ENTER THE INITIAL QUANTITY:";
	cin >> initial_quantity;
	cout << "\n ENTER THE THRESHOLD QUANTITY:";
	cin >> threshold;
	current_quantity = initial_quantity;
	cout << "\n CURRENT QUANTITY:" << current_quantity << endl;
	cout << "\n ENTER THE CHOICES(1-3):" << endl;
	cout << "1.soldquantity:" << endl;
	cout << "2.restockquantity : " << endl;
	cout << "3.exit : ";
	int choice;
	cout << "\nENTER THE CHOICE:";
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1:
			cout << "ENTER THE SOLDQUANTITY:";
			cin >> sold_quantity;
			current_quantity -= sold_quantity;
			cout << "SOLD:" << sold_quantity << "  REMAINING QUANTITY:" << current_quantity;
			{
				if (current_quantity <= sold_quantity)
					cout << "\nSALES CAN BE DONE BECAUSE SOLD QUANTITY IS:" << sold_quantity;
				else
					cout << "\n SALES CANN'T BE DONE:";
			}
			break;
		case 2:
			cout << "ENTER THE RESTOCK QUANTITY:";
			cin >> restock_quantity;
			current_quantity += restock_quantity;
			cout << "\nSOLD:" << restock_quantity << "REMAINING QUANTITY" << current_quantity;
			break;
		case 3:
			cout << "EXIT THE PROGRAM.";
			break;
		default:
			cout << "INVALID CHOICE:";
		}
	} while (choice != 3);
	return 0;
}*/
