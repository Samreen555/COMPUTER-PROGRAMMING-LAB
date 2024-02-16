/*
* // area calculation
#include<iostream>
using namespace std;
int main()
{
	float area, circum, r;
	float const pi = 3.14;
	cout << "Enter the radius:";
	cin >> r;
	area = pi * r * r;
	circum = 2 * pi * r;
	cout << "Area:" << area << endl;
	cout << "Circum:" << circum << endl;
	return 0;
}
// cout operation
#include <iostream>
using namespace std;
int main()
{
	int a = 5, b = 6, c = 8;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
// add multiply subtraction division
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, add, subtract, multiply;
	float divide, avg;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	cout << "D=";
	cin >> d;
	add = a + b + c + d;
	subtract = a - b - c - d;
	multiply = a * b * c * d;
	divide = a/b;
	avg = (a + b + c + d) / 4;
	cout << "ADD=" << add << endl;
	cout << "SUBTRACT=" << subtract << endl;
	cout << "MULTIPLY=" << multiply << endl;
	cout << "DIVIDE=" << divide << endl;
	cout << "AVG=" << avg << endl;
	return 0;
}
// cout operation 
#include <iostream>
using namespace std;
int main()
{
	cout << "MY NAME IS SAMREEN FARHAT\n";
	system("pause");
	return 0;
}
// swap function
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	a = b;
	c = b;
	c = a;
	cout << a;
	cout << b;
	cout << c;
	return 0;
}
// student information
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char name[50];
	string b_year, c_year, cnic, address;
	int  age;
	cout << "enter your name\n";
	cin >> name;
	cout << "Enter your cnic \n";
	getline(cin, cnic);
	cout << "Enter address\n";
	getline(cin, address);
	cout << "Enter birthyear\n";
	getline(cin, b_year);
	cout << "Enter the current year\n";
	getline(cin,c_year);
	age = c_year - b_year;
	cout << "Name:" << name << endl;
	cout << "Addres:s" << address << endl;
	cout << "CNIC:" << cnic << endl;
	cout << "Age:" << age << endl;
	return 0;
}
// bill charges
#include <iostream>
using namespace std;
int main()
{
	int bill;
	float n_calls, rate, m_charges;
	cout << "Enter the n_calls:";
	cin >> n_calls;
	if (n_calls <= 100)
	{
		rate = 0.80;
		m_charges = 250;
		bill = n_calls * rate * m_charges;
		cout << bill;
	}
	else if (n_calls > 100 && n_calls <= 250)
	{
		rate = 1.00;
		m_charges = 350;
		bill = n_calls * rate * m_charges;
		cout << bill;
	}
	else if (n_calls > 350)
	{
		rate = 1.25;
		m_charges = 500;
		bill = n_calls * rate * m_charges;
		cout << bill;
	}
	return 0;
}
// even and odd function
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	if (num % 2 == 0)
		cout << "The number is even : "<<num;
	else
		cout << "The number is odd : "<<num;
	return 0;
}
// marks calculations
#include<iostream>
using namespace std;
int main()
{
	int num, sub1, sub2, sub3;
	cout << "Enter the marks:";
	cin >> sub1 >> sub2 >> sub3;
	num = (sub1 + sub2 + sub3) / 3;
	if (num > 90)
		cout << "GRADE:A";
	else if (num > 80 && num < 90)
		cout << "GEADE:B";
	else if (num > 70 && num < 80)
		cout << "GRADE:C:";
	else if (num < 50)
		cout << "GRADE:F";
	else
		cout << "WRONG NUMBER";
	return 0;
}
// simple calculator
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, result;
	char op;
	cout << "Enter first number and second number=:" << endl;
	cin >> num1 >> num2;
	cout << "Enter the operation(+,-,*,/,%):" << endl;
	cin >> op;
	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	case '%':
		result = num1 % num2;
		break;
	default:
		cout << "INVALID OPERATION:";
	}
	cout << "Enter first number,operator and second number=:" << num1<<" "<< num2 <<" "<< op <<"  =" << result << endl;
	system("pause");
	return 0;
}
// color output
#include <iostream>
using namespace std;
int main()
{
 char color;
 cout << "MAIN MENU:";
 cout << "R. FOR RED" << endl << "W. FOR WHITE" << endl << "B. BLUE" << endl << "Y.
YELLOW"<<endl;
 cout << "PLEASE ENTER YOUR CHOICE:";
 cin >> color;
 switch (color)
 {
 case'R':
 cout << "R. FOR RED";
 break;
 case'W':
 cout<< "W. FOR WHITE";
 break;
 case'B':
 cout<< "B. BLUE" ;
 break;
 case'Y':
 cout<< "Y. YELLOW";
 break;
 default:
 cout << "INVALID COLOR:";
 }
 system("pause");
 return 0;
}
#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}
// stars
#include <iostream>
using namespace std;
int main()
{
	{
	    int i;
		for (i = 1; i <= 6; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
    }
		{
			int a;
			for(a = 6; a <= 1; a--)
			{
				for (int b = a; b <= 1; b++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
	return 0;
}
// table
#include <iostream>
using namespace std;
int main()
{
	int i, num;
	cout << "ENTER THE NUM:";
	cin >> num;
	for (i = 1; i <= 10; i++)
	{
		cout << num << "*" << i << "=" << num * i << endl;
	}
	cout << endl << i;
	return 0;
}
// sum 
#include<iostream>
using namespace std;
int main()
{
	int i;
	int sum = 0;
	for (i = 0; i <= 10; i = i + 2)
	{
		sum = sum + i;
	}

	cout << "SUM IS:" << sum << endl;

	system("pause");
	return 0;
}
//mean and median
#include <iostream>
using namespace std;

int main()
{
	const int n = 7; // Declare and assign the size of the array
	int a[n];
	cout << "Enter the numbers:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	float mean, sum;
	sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}

	mean = sum / n; // Corrected division by the number of elements in the array

	cout << "MEAN IS:" << mean << endl;

	// Median
	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	float median;

	if (n % 2 == 0)
	{
		median = (a[n / 2] + a[n / 2 - 1]) / 2.0; // Corrected floating-point division
	}
	else
	{
		median = a[n / 2];
	}

	cout << "MEDIAN IS:" << median << endl;

	return 0;
}
//random lottery number
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int x = time(0);
	srand(x);
	cout << "random lottery number:" << endl;
	for (int i = 1; i <= 8; i++)
		cout << i + rand() % 6 << "\n";
	return 0;
}
//ascii code
#include<iostream>
using namespace std;
int main()
{
	//declaring and initializing the variable with ascii code
	char n = 91;
	while (n > 65)
	{
		n = n--;
		cout << n << " ";
	}
	system("pause");
	return 0;
}
//factoria
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "ENTER THE NUMBER:";
	cin >> n;

	int factorial = 1; // Initialize the factorial variable

	for (int i = n; i >= 1; i--)
	{
		factorial = factorial * i;
	}

	cout << "FACTORIAL OF THE NUMBER is " << factorial << endl;
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int i = 21;
	while (i >= 1)
	{
		i--;
		cout << endl;

		cout << i;
	}
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	float i = 1, sum = 0;
	while (i <= 45)
	{
		sum = sum + 1 / i;
		i++;
	}
	cout << "SUM:" << sum;
	cout << endl;
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "ENTER THE NUMBER:";
	cin >> n;
	int i = n - 1, sum = 0;
	float avg = 0;
	while (i > 1)
	{
		i--;
		sum = sum + n;
		avg = sum / n;
	}
	cout << "SUM IS:" << sum << endl;
	cout << "AVG IS:" << avg;
	cout<<endl;
	system("pause");
	return 0;
}
//Binary representation
#include <iostream>
#include<bitset>
using namespace std;
int main()
{
	int number;
	cout << "Enter an integer: ";
	cin >> number;
	cout << "Binary representation: ";
	for (int i = 10; i >= 0; i--) {
		int bit = (number >> i) & 1;
		cout << bit;
	}
	cout << endl;
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int n = 7;
	int a[7];
	int i = 0;
	while (i < n)
	{
		i++;
		cin >> a[i];
	}
	float mean, sum;
	sum = 0;
	int j = 0;
	while (j < n)
	{
		j++;
		sum = sum + a[j];
	}
	mean = sum / n;
	cout << "MEAN IS:" << mean << endl;
	cout << endl;
	system("pause");
	return 0;
}
//LOTTERY NUMBER GENERATOR
#include <iostream>
using namespace std;
int main() {
	int x = time(0);
	cout << "LOTTERY NUMBER GENERATOR:" << endl;
	srand(x);
	int i = 1;
	while (i <= 8)
	{
		i++;
		cout << i + rand() % 6;
		cout << "\t";
	}
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int n = 20;
	do
	{
		cout << n << endl;
		n--;
	} while (n >= 1);
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	// Write C++ code here
	float num;
	cout << "ENTER THE NUMBER:" << endl;
	cin >> num;
	int i = num - 1;
	do
	{
		num = num * i;
		i--;
	} while (i >= 1);
	cout << "FACTORIAL IS:" << num;
	cout << endl;
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int decimal_number;
	cout << "ENTER A DECIMAL NUMBER:";
	cin >> decimal_number;
	cout << "THE OCTAL REPRESENTATION IS:" << oct << decimal_number << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	float answer;
	char op;
	cin >> num1 >> num2;
	cin >> op;
	cout << "ENTER THE FIRST NUMBER,OPERATOR AND SECOND NUMBER:" << num1 << op << num2 << endl;
	char i;
	do
	{
		switch (op)
		{
		case'+':
			answer = num1 + num2;
			cout << "ANSWER IS:" << answer;
			break;
		case'-':
			answer = num1 - num2;
			cout << "ANSWER IS:" << answer;
			break;
		case'*':
			answer = num1 * num2;
			cout << "ANSWER IS:" << answer;
			break;
		case'/':
			answer = num1 / num2;
			cout << "ANSWER IS:" << answer;
			break;
		default:
			cout << "INVALID OPERATOR:" << endl;
		}
		cout << endl << "Do another (y/n)?:" << endl;
		i++;
	} while (i == 'y');
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int i = 7;
	do {
		cout << i << "\t";
		i = i + 7;
	} while (i <= 98);
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
 int i=1;
 do{
 cout<<i<<"\t";
 i=i*2;
 }
 while(i<=512);
 return 0;
}
#include<iostream>
using namespace std;
int main()
{
	string book_inventory, borrowed_books;
	int fine = 0;
	int choice;
	cout << "LIBRARY SYSTEM MANAGEMENT:" << endl;
	cout << "1.BORROW A BOOK:" << endl;
	cout << "2.RETURN A BOOK:" << endl;
	cout << "3.CHECK FINES:" << endl;
	cout << "4.QUIT:" << endl;
	cout << "ENTER YOUR CHOICE:";
	cin >> choice;
	if (choice == 1)
	{
		cout << "ENTER THE BOOK NAME TO BORROW:";
		cin >> book_inventory;
		cout << endl << "YOU BORROW THE BOOK" << book_inventory << "FOR 5 DAYS:" << endl;
	}
	else if (choice == 2)
	{
		cout << "ENTER THE BOOK NAME TO RETURN:";
		cin >> book_inventory;
		cout << endl << "YOU RETURN THE BOOK:" << book_inventory << endl;
		int days;
		cout << "ENTER THE DAYS:";
		cin >> days;
		if (days >= 5)
		{
			cout << "FINED" << endl;
			fine = days * 1;
			cout << "TOTAL FINE IS:$" << fine << endl;
		}
		else
			cout << "NO FINE:";
		cout << "THANK YOU:" << endl;
	}
	else if (choice == 2 && choice == 3)
	{
		cout << "FINED IS:" << fine;
	}
	else if (choice == 4)
		cout << "QUIT:";
	else
		cout << "INVALID INFORMATION:";
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	string choice = "";
	int num, p = 1;
	cout << "ENTER THE NUMBER:";
	cin >> num;
	cout << "ENTER YOUR CHOICE:";
	cin >> choice;
	if (choice == "yes")
	{
		double range;
		cout << "ENTER THE RANGE:";
		cin >> range;
		// printing the series of prime number
		for (int i = num; i <= range; i++)
		{
			p = 1; //reset p to 1 for each new number.
			for (int j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					p = 0;
					break;
				}
			}
			if (p == 1)
				cout << "THE PRIME NUMBER IS:" << i << "\t" << endl;
		}
	}
	else if (choice == "specific")
	{
		p = 1; //reset p to 1
		for (int j = 2; j <= num / 2; j++)
			if (num % j == 0)
			{
				p = 0;
				break;
			}
		if (p == 1)
			cout << "THE NUMBER IS PRIME:" << num << endl;
		else
			cout << "THE NUMBER IS NOT PRIME:" << num << endl;
	}
	else
		cout << "bye bye";
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
 int n = 20;
do{
cout<<n<<endl;
n--;
   }
while (n>=1);
 return 0;
} 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	float sum = 0;
	cout << "Enter the n value: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		float term = 1.0 / pow(i, i);
		cout << "1/" << i << "^" << i << " = " << term << endl;
		cout << endl;
		sum += term;
	}
	cout << "Sum of the series is: " << sum << endl;
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float x;
	int n;
	cout << "Input the value of x: ";
	cin >> x;
	cout << "Input number of terms: ";
	cin >> n;
	float sum = 0;
	cout << "The values of the series: " << endl;
	for (int i = 0; i < n; ++i) {
		float term = pow(x, 2 * i + 1) * pow(-1, i);
		cout << term << endl;
		sum += term;
	}
	cout << "The sum of the series up to " << n << " terms is: " << sum <<
		endl;
	return 0;
}
#include<iostream>
using namespace std;
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
	int rev = 0;
	for (int rem = 0; rem = a % 10; rem++) //for loop for rem
	{
		rev = rev * 10 + rem;
		a /= 10;
	}
	return rev;
}*/
/*
#include<iostream>
using namespace std;
double power(double n,int p=2); //function prototype
int main()
{
int b,p=2;
cout << "ENTER A NUMBER:";
cin >> b;
cout << "power of the number\t" << b << "\tis:" << power(b,p)<<endl;
//function call
system("pause");
return 0;
}
double power(double n, int p)//function defination
{
int num = n *n;
return num;
}
*/
/*
#include<iostream>
using namespace std;
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
if (islower(lowercase))
{
return toupper(lowercase);
}
}
*/
/*
#include<iostream>
using namespace std;
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
*/
/*
#include<iostream>
using namespace std;
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
}
*/
/*
#include <iostream>
#include <string>
#include <thread> // Include for std::this_thread::sleep_for
#include <chrono>
using namespace std;
// Function prototypes
void sendMessage(const string& recipient, const string& message);
void receiveMessage(const string& sender, const string& message);
void makeCall(const string& recipient);
void ring();
int main() {
// sending and receiving messages, making a call, and ringing
sendMessage("Friend", "Hello, how are you?");
receiveMessage("Friend", "I'm doing well, thanks!");
makeCall("Family");
// The ring function will continue until the receiver picks up
ring();
return 0;
}
// Function definitions
void sendMessage(const string& recipient, const string& message) {
cout << "Sending message to " << recipient << ": " << message << endl;
}
void receiveMessage(const string& sender, const string& message) {
cout << "Received message from " << sender << ": " << message << endl;
}
void makeCall(const string& recipient)
{
cout << "Calling " << recipient << "..." << endl;
}
void ring() {
cout << "Ringing..." << endl;
for (int i = 1; i <= 5; ++i) {
cout << "Ring " << i << "..." << endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
}
cout << "Call picked up! Conversation started." << endl;
}
*/
/*
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool palindrome(string& str,int start,int end);// function prototype
bool palindrome1(string& str);
int main()
{
//Determine whether a string is a palindrome or not.
string input;
cout << "Enter a string to palindrome it:";
getline(cin, input);
if (palindrome1(input))
{
cout << "The string is palindrome: "<<endl;
}
else
cout << "The string is not a palindrome: " << endl;
system("pause");
return 0;
}
bool palindrome(string& str, int start, int end) // function defination
{
if (start >= end)
{
return true;
}
while (start<end && !isalnum(str[start]))
{
++start;
}
while (start < end && !isalnum(str[end]))
{
--end;
}
return (tolower(str[start]) == tolower(str[end])) &&
palindrome(str,start+1,end-1);
}
bool palindrome1(string& str)
{
return palindrome(str, 0, str.length() - 1);
}
*/
/*
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
// Function prototypes
void sendMessage(const string& recipient, const string& message);
void sendMessage(const string& recipient, const string& message, const string&
attachment);
void sendMessage(const string& recipient, const string& message, const string&
attachment, const string& mediaType);
void receiveMessage(const string& sender, const string& message);
void receiveMessage(const string& sender, const string& message, const string&
attachment);
void receiveMessage(const string& sender, const string& message, const string&
attachment, const string& mediaType);
void makeCall(const string& recipient);
void makeCall(const string& recipient, const string& callType);
void makeConferenceCall(const string& recipient, const string& callType);
void ring();
int main() {
// sending and receiving messages, making a call, and ringing
sendMessage("Friend", "Hello, how are you?");
receiveMessage("Friend", "I'm doing well, thanks!"); // message text
sendMessage("Family", "Check out this picture!", "family_picture.jpg");
receiveMessage("Family", "Nice picture!", "family_picture.jpg"); //
message picture
sendMessage("Colleague", "Meeting at 3 PM", "agenda.pdf", "document");
receiveMessage("Colleague", "Got it, thanks!", "agenda.pdf", "document");
//message file
makeCall("Boss");
ring();
makeCall("Friend", "Audio");
ring();
makeConferenceCall("Team Meeting", "Audio");
ring();
return 0;
}
// Function definitions
void sendMessage(const string& recipient, const string& message) {
cout << "Sending text message to " << recipient << ": " << message <<
endl;
}
void sendMessage(const string& recipient, const string& message, const string&
attachment) {
cout << "Sending message to " << recipient << ": " << message << " with
attachment: " << attachment << endl;
}
void sendMessage(const string& recipient, const string& message, const string&
attachment, const string& mediaType) {
cout << "Sending " << mediaType << " message to " << recipient << ": " <<
message << " with attachment: " << attachment << endl;
}
void receiveMessage(const string& sender, const string& message) {
cout << "Received text message from " << sender << ": " << message <<
endl;
}
void receiveMessage(const string& sender, const string& message, const string&
attachment) {
cout << "Received message from " << sender << ": " << message << " with
attachment: " << attachment << endl;
}
void receiveMessage(const string& sender, const string& message, const string&
attachment, const string& mediaType) {
cout << "Received " << mediaType << " message from " << sender << ": " <<
message << " with attachment: " << attachment << endl;
}
void makeCall(const string& recipient) {
cout << "Calling " << recipient << "..." << endl;
}
void makeCall(const string& recipient, const string& callType) {
cout << "Calling " << recipient << " with " << callType << "..." << endl;
}
void makeConferenceCall(const string& recipient, const string& callType) {
cout << "Initiating conference call with " << recipient << " using " <<
callType << "..." << endl;
}
void ring() {
cout << "Ringing..." << endl;
// Simulate the ringing process until the receiver picks up
for (int i = 1; i <= 5; ++i) {
cout << "Ring " << i << "..." << endl;
// Simulate waiting for 1 second
std::this_thread::sleep_for(std::chrono::seconds(1));
}
cout << "Call picked up! Conversation started." << endl;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
void reverse(string& str, int start, int end); //function prototype
int main()
{
//Write a C++ program to Reverse a String using recursion.
string input;
cout << "Enter a string to reserve it:";
getline(cin, input);
reverse(input, 0, input.length() - 1);
cout << "Reversed string is : " << input << endl;
system("pause");
return 0;
}
void reverse(string& str, int start, int end) //function definations
{
if (start >= end)
{
return;
}
swap(str[start], str[end]);
//recersive call to reserve the string
reverse(str, start + 1, end - 1);
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
//even odd numbers in a array
int array[7],i=0;
int even=0, odd=0;
cout << "Enter the values: ";
while( i <=6)
{
cin >> array[i];
cout << endl;
if (array[i] % 2 == 0)
{
even++;
}
else {
odd++;
}
i++;
}
cout << "Total even values: "<<even<<endl;
cout << "Total odd values: "<<odd<<endl;
system("pause");
return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
int array[4] = { 4,9,1,3 };
cout << "Original array: ";
for (int i = 0; i < 4; i++)
{
cout << array[i] << " ";
}
cout << endl;
//buble sort
for (int i = 0; i < 4 - 1; i++)
{
for (int j = 0; j < 4 - 1-i; j++)
{
if (array[j] > array[j + 1])
{
array[j] =array[j] + array[j + 1];
array[j + 1]= array[j] - array[j + 1];
array[j] = array[j] - array[j + 1];
}
}
}
cout << "Sorted array: ";
for (int i = 0; i < 4; i++)
{
cout << array[i] << " ";
}
cout << endl;
system("pause");
return 0;
}
#include<iostream>
using namespace std;
int main()
{
int i, j;
int array[4][3] = { {1,2,3},{2,4,6},{3,5,-7},{ -1,4,8} };
for ( i = 0; i < 4; i++)
{
for ( j= 0;j < 3;j++)
{
cout << array[i][j] << " ";
}
cout << endl;
}
cout << endl;
cout << "Negative values in a array: ";
for (i = 0; i < 4; i++)
{
for (j = 0; j < 3; j++)
{
if (array[i][j] < 0)
{
cout << array[i][j] << " ";
}
}
}
cout << endl;
system("pause");
return 0;
}
#include<iostream>
using namespace std;
void maxint(int array[]); // function prototype
int main()
{
int array[5];
cout << "Enter any five integer: ";
for (int i = 0; i < 5; i++)
{
cin >> array[i];
}
maxint(array);
system("pause");
return 0;
}void maxint(int array[]) // function defination
{
int large = array[0];
int index = 0;
for ( int i = 0; i < 5; i++)
{
if (array [i]< large)
large = array[i];
 index = i;
}
cout << "The largest number is at index: " << index << endl;
}
#include<iostream>
using namespace std;
int count_evens(int numbers[],int size); //function prototype
int main()
{
int array1[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int array2[5]= { 2, 4, 6, 8, 10 };
int array3[5]= { 1, 3, 5, 7, 9 };
cout << "Even number in array 1:" << count_evens(array1,9) << endl;
cout << "Even number in array 2:" << count_evens(array2,5) << endl;
cout << "Even number in array 3:" << count_evens(array3,5) << endl;
system("pause");
return 0;
}
int count_evens(int numbers[],int size) // function defination
{
int count = 0;
for (int i = 0; i < size; i++)
{
{
if (numbers[i] % 2 == 0)
count++;
}
}
return count;
}
#include <iostream>
#include <cstring>
#include <utility>
using namespace std;
bool isPalindrome(const char str[]) {
int length = strlen(str);
for (int i = 0, j = length - 1; i < j; ++i, --j) {
if (str[i] != str[j]) {
return false;
}
}
return true;
}
void palindrome_pairs(const char words[][100], int size) {
for (int i = 0; i < size; ++i) {
for (int j = i + 1; j < size; ++j) {
if (isPalindrome(words[i]) && isPalindrome(words[j])) {
cout << "(" << words[i] << ", " << words[j] << ")"
<<endl;
}
}
}
}int main() {
const char words1[][100] = { "racecar", "level", "radar", "hello", "world"
};
const char words2[][100] = { "hello", "world", "foo", "bar" };
cout << "Palindrome pairs in words1:" << endl;
palindrome_pairs(words1, sizeof(words1) / sizeof(words1[0]));
cout << "Palindrome pairs in words2:" <<endl;
palindrome_pairs(words2, sizeof(words2) /sizeof(words2[0]));
return 0;
}
#include <iostream>
using namespace std;
struct {
int hours;
int minutes;
int seconds;
}t1;
int main() {
double totalSeconds;
cout << "Enter hours, minutes and seconds in the HH:MM:SS format: ";
cin >> t1.hours >> t1.minutes >> t1.seconds;
totalSeconds = (t1.hours * 3600) + (t1.minutes * 60) + (t1.seconds);
cout << "\nTotal Seconds: " << totalSeconds << "s";
system("pause");
return 0;
}
#include <iostream>
using namespace std;
struct {
int areaCode;
int exchange;
int number;
}myPhone, userPhone;
int main() {
myPhone.areaCode = 123;
myPhone.exchange = 456;
myPhone.number = 7890;
cout << "Enter you area code, exchange and phone number: ";
cin >> userPhone.areaCode >> userPhone.exchange >> userPhone.number;
cout << "\nMy phone number: " << myPhone.areaCode << "-" <<
myPhone.exchange << "-" << myPhone.number;
cout << "\nYour phone numbe is: " << userPhone.areaCode << "-" <<
userPhone.exchange << "-" << userPhone.number;
system("pause");
return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
struct Student {
string name;
string en_no;
vector<string> subjects;
vector<int> cr_hrs;
vector<int> q_marks;
vector<int> a_marks;
vector<int> f_marks;
char grades; // Assuming grades is a single character, modify accordingly
float gpa;
};
void displayStudentRecord(const Student& st_record) {
// Display the result in table form
cout << "Student Record:" << endl;
cout << "Name: " << st_record.name << endl;
cout << "Enrollment Number: " << st_record.en_no << endl;
cout << endl;
// Display header
cout << setw(25) << "Subjects" << setw(15) << "Credit Hours" << setw(15)
<< "Quiz Marks"
<< setw(20) << "Assignment Marks" << setw(20) << "Final Exam Marks"
<< setw(10) << "Grades" << endl;
// Display data in table form
for (size_t i = 0; i < st_record.subjects.size(); ++i) {
cout << setw(25) << st_record.subjects[i] << setw(15) <<
st_record.cr_hrs[i]
<< setw(15) << st_record.q_marks[i] << setw(20) <<
st_record.a_marks[i]
<< setw(20) << st_record.f_marks[i] << setw(10) <<
st_record.grades << endl;
}
cout << "GPA IS: 4.0" << endl; // Adjust the GPA value accordingly
}
int main() {
// Declare a variable st_record of type Student
Student st_record;
// Input information in data members
st_record.name = "Samreen Farhat";
st_record.en_no = "01-131232-079";
st_record.subjects = { "Programming Fundamentals", "Compiler
Construction", "OOP", "English", "Physics" };
st_record.cr_hrs = { 4, 3, 3, 3, 4 };
st_record.q_marks = { 90, 85, 88, 89 };
st_record.a_marks = { 95, 88, 92, 89 };
st_record.f_marks = { 75, 80, 78, 89 };
st_record.grades = 'A'; // Use a single character for grades, not an
array
// Display the result in table form
displayStudentRecord(st_record);
return 0;
}
#include <iostream>
#include<string>
using namespace std;
struct {
string name;
int quantity;
float price;
}productInfo;
int main() {
productInfo.name = "cola";
productInfo.quantity = 50;
productInfo.price = 30.5;
cout << "Enter product name: ";
string userInput;
getline(cin, userInput);
if (userInput == productInfo.name) {
cout << "\nProduct Name: " << productInfo.name << endl;
cout << "Product Price: " << productInfo.price << endl;
cout << "Product quantity in stock: " << productInfo.quantity <<
endl;
}
else {
cout << "Product not found";
}
return 0;
}
#include <iostream>
#include<string>
using namespace std;
struct {
string name;
string address;
string number;
}customerInfo;
int main() {
customerInfo.name = "Alex";
customerInfo.address = "123 Main Street, Cityville, Stateland";
customerInfo.number = "123-456-7890";
cout << "Enter customer's name: ";
string userInput;
getline(cin, userInput);
if (userInput == customerInfo.name) {
cout << "\nCustomer Name: " << customerInfo.name << endl;
cout << "Customer Address: " << customerInfo.address << endl;
cout << "Customer Number: " << customerInfo.number << endl;
}
else {
cout << "Not found";
}
return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	// Seed the random number generator with the current time
	srand(time(0));
	// Generate a random number between 1 and 100
	int secretNumber = rand() % 100 + 1;
	int guess;
	int attempts = 0;
	cout << "Welcome to the Number Guessing Game!" << endl;
	cout << "Guess a number between 1 and 100." << endl;
	do {
		cout << "Enter your guess: ";
		cin >> guess;

		attempts++;

		if (guess == secretNumber) {
			cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
		}
		else if (guess < secretNumber) {
			cout << "Too low. Try again." << endl;
		}
		else {
			cout << "Too high. Try again." << endl;
		}

	} while (guess != secretNumber);

	return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;
	cout << "Enter the string:" << endl;
	getline(cin, input);

	int length = input.length();
	for (int i = 0; i < length / 2; i++)
	{
		// Swap characters from the beginning and end of the string
		char temp = input[i];
		input[i] = input[length - 1 - i];
		input[length - 1 - i] = temp;
	}

	cout << "Reversed string: " << input << endl;

	system("pause");
	return 0;
}
}
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		// Find the minimum element in unsorted part of the array
		int minIndex = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		// Swap the found minimum element with the first element
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original array: ";
	printArray(arr, n);

	selectionSort(arr, n);

	cout << "Sorted array: ";
	printArray(arr, n);

	return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;
struct BankAccount {
	string accountHolder;
	int accountNumber;
	float balance;

	// Function to deposit money
	void deposit(float amount) {
		balance += amount;
		cout << "Deposit successful. Current balance: " << balance << endl;
	}

	// Function to withdraw money
	void withdraw(double amount) {
		if (amount <= balance) {
			balance -= amount;
			cout << "Withdrawal successful. Current balance: " << balance << endl;
		}
		else {
			cout << "Insufficient funds. Withdrawal failed." << endl;
		}
	}

	// Function to check balance
	void checkBalance() {
		cout << "Account Holder: " << accountHolder << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Current Balance: " << balance << endl;
	}
};

int main() {
	// Create a bank account
	BankAccount myAccount = { "John Doe", 123456789, 1000.0 };

	// Perform operations
	myAccount.checkBalance();

	myAccount.deposit(500.0);
	myAccount.checkBalance();

	myAccount.withdraw(200.0);
	myAccount.checkBalance();

	myAccount.withdraw(1500.0); // Insufficient funds
	myAccount.checkBalance();

	return 0;
}


