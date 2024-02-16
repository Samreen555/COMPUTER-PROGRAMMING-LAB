/*
#include<iostream>
using namespace std;
int main()
{
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int swap(int& a, int& b);//function prototype
int main()
{
	int a, b;
	cout << "Enter the value of a: \n";
	cin >> a;
	cout << "Enter the value of b: \n";
	cin >> b;
	swap(a, b);
	cout << "\n Value of a after exchanging is: " << a;
	cout << "\n Value of b after exchanging is: " << b;
	system("pause");
	return 0;
}
int swap(int& a, int& b) //function defination
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}
#include<iostream>
using namespace std;
int areasquare(int r); // function prototype
int areacircle(float r);  // function prototype
int arearectangle(float a, float b);  // function prototype
const float pi = 3.14;    //constant variable 
int main()
{
	int r, choice;
	float radius, a, b;
	cout << "Press 1 for area of square: ";
	cout << "Press 2 area of rectangle: " << endl;
	cout << "Press 3 area of circle: " << endl;
	cout << "Enter your choice:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "ENTER THE RADIUS: ";
		cin >> r;
		areasquare(r);   //function call
		break;
	case 2:
		cout << "ENTER THE LENGTH: ";
		cin >> a;
		cout << "\n ENTER THE BREATH: ";
		cin >> b;
		arearectangle(a, b);      //function call
		break;
	case 3:
		cout << "ENTER THE RADIUS: ";
		cin >> radius;
		areacircle(radius);     //function call
		break;
	default:
		cout << "invalid choice: ";

	}
	system("pause");
	return 0;
}
int areasquare(int r)    //function defination
{

	int result = r * r;
	cout << "AREA OF SQUARE IS:" << result;
	return 0;
}
int arearectangle(float a, float b)    //function defination
{
	int result = a * b;
	cout << "AREA OF RECTANGLE IS: " << result;
	return 0;
} 
int areacircle(float r)   //function defination
{

	float result = 2 * pi * r;
	cout << "AREA OF CIRCLE IS: " << result;
	return 0;
}

#include<iostream>
using namespace std;
int sum(int a, int b);
float sum(float c, float d);
int main()
{
	int a, b;
	float c, d;
	cout << "ENTER THE FIRST INTEGER VALUE: ";
	cin >> a;
	cout << "\n ENTER THE SECOND INTEGER VALUE: ";
	cin >> b;
	cout<<"Sum of "<<a<< "and "<<b<<"is= "<<sum(a, b);

	cout << endl;
	for (int a = 1; a <= 30; a++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "\n ENTER THE FIRST FLOAT VALUE: ";
	cin >> c;
	cout << "\n ENTER THE SECOND FLOAT VALUE: ";
	cin >> d;
	cout << "Sum of " << c << "and " << d << "is= " << sum(c, d);
	system("pause");
	return 0;

}
int sum(int a,int b)
{
	int result = a + b;
	 return  result;
}
float sum(float c, float d)
{
	float result = c + d;
	 return  result;
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
}*/
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
	cout << "The sum of the series up to " << n << " terms is: " << sum << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <thread>  // Include for std::this_thread::sleep_for
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
void makeCall(const string& recipient) {
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

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
// Function prototypes
void sendMessage(const string& recipient, const string& message);
void sendMessage(const string& recipient, const string& message, const string& attachment);
void sendMessage(const string& recipient, const string& message, const string& attachment, const string& mediaType);
void receiveMessage(const string& sender, const string& message);
void receiveMessage(const string& sender, const string& message, const string& attachment);
void receiveMessage(const string& sender, const string& message, const string& attachment, const string& mediaType);
void makeCall(const string& recipient);
void makeCall(const string& recipient, const string& callType);
void makeConferenceCall(const string& recipient, const string& callType);
void ring();
int main() {
	// sending and receiving messages, making a call, and ringing
	sendMessage("Friend", "Hello, how are you?");
	receiveMessage("Friend", "I'm doing well, thanks!"); // message text

	sendMessage("Family", "Check out this picture!", "family_picture.jpg");
	receiveMessage("Family", "Nice picture!", "family_picture.jpg");   // message picture

	sendMessage("Colleague", "Meeting at 3 PM", "agenda.pdf", "document");
	receiveMessage("Colleague", "Got it, thanks!", "agenda.pdf", "document");   //message file

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
	cout << "Sending text message to " << recipient << ": " << message << endl;
}

void sendMessage(const string& recipient, const string& message, const string& attachment) {
	cout << "Sending message to " << recipient << ": " << message << " with attachment: " << attachment << endl;
}

void sendMessage(const string& recipient, const string& message, const string& attachment, const string& mediaType) {
	cout << "Sending " << mediaType << " message to " << recipient << ": " << message << " with attachment: " << attachment << endl;
}

void receiveMessage(const string& sender, const string& message) {
	cout << "Received text message from " << sender << ": " << message << endl;
}

void receiveMessage(const string& sender, const string& message, const string& attachment) {
	cout << "Received message from " << sender << ": " << message << " with attachment: " << attachment << endl;
}

void receiveMessage(const string& sender, const string& message, const string& attachment, const string& mediaType) {
	cout << "Received " << mediaType << " message from " << sender << ": " << message << " with attachment: " << attachment << endl;
}

void makeCall(const string& recipient) {
	cout << "Calling " << recipient << "..." << endl;
}

void makeCall(const string& recipient, const string& callType) {
	cout << "Calling " << recipient << " with " << callType << "..." << endl;
}

void makeConferenceCall(const string& recipient, const string& callType) {
	cout << "Initiating conference call with " << recipient << " using " << callType << "..." << endl;
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

#include<iostream>
#include<string>
using namespace std;
void reverse(string& str, int start, int end);       //function prototype
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

#include<iostream>
#include<string>
using namespace std;
void permutation(string& str, int start, int end);    //function prototype
int main()
{
	// Find all permutations of a string in C++ (Using Backtracking (Recursion) and built-in Swap function).
	string input;
	cout << "Enter a string to permutate it:";
	cin>> input;
	int length = input.length();
	permutation(input, 0, length - 1);

	system("pause");
	return 0;

}
void permutation(string& str, int start, int end) //function definations
{
	if (start == end)
	{
		cout << str << endl;
		return;
	}
	for (int i = start; i <= end; ++i)
	{
		swap(str[start], str[i]);
		//recersive call to permutate the string
		permutation(str, start + 1, end-1);
		swap(str[start], str[i]);
	}
}
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
			cout << "The string is not a  palindrome: " << endl;
	system("pause");
	return 0;
}
bool palindrome(string& str, int start, int end)     // function defination
{
	if (start >= end)
	{
		return true;
	}
	while (start<end   &&   !isalnum(str[start]))
	{
		++start;
	}
	while (start < end && !isalnum(str[end]))
	{
		--end;
	}
	return (tolower(str[start]) == tolower(str[end])) && palindrome(str,start+1,end-1);
}
bool palindrome1(string& str)
{
	return palindrome(str, 0, str.length() - 1);
}

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
void maxint(int array[]);  // function prototype
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
				cout << "(" << words[i] << ", " << words[j] << ")" <<endl;
			}
		}
	}
}

int main() {
	const char words1[][100] = { "racecar", "level", "radar", "hello", "world" };
	const char words2[][100] = { "hello", "world", "foo", "bar" };

	cout << "Palindrome pairs in words1:" << endl;
	palindrome_pairs(words1, sizeof(words1) / sizeof(words1[0]));

	cout << "Palindrome pairs in words2:" <<endl;
	palindrome_pairs(words2, sizeof(words2) /sizeof(words2[0]));

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	char chartoDelete;

	cout << "Enter the string: ";
	getline(cin, input);

	cout << "Enter the character to delete: ";
	cin >> chartoDelete;
	cout << "Original string: " << input << endl;
	size_t pos = input.find(chartoDelete);

	while (pos != string::npos) {
		input.erase(pos, 1);
		pos = input.find(chartoDelete, pos);
	}
	cout << "String after deleting: " << input << endl;

	system("pause");
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;

	// Input the string
	cout << "Enter a string: ";
	getline(std::cin, input);

	// Find the length of the string
	int length = input.length();

	// Output the result
	cout << "Length of the string: " << length << std::endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;

	// Input the string
	cout << "Enter a string: ";
	getline(std::cin, input);

	// Count the characters in the string
	int charCount = 0;

	for (char ch : input) {
		if (isgraph(ch)) {  // Check if the character is printable and not a space
			charCount++;
		}
	}

	// Output the result
	cout << "Number of characters in the string: " << charCount << std::endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	// Open the file for reading
	ifstream inputFile("example.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout<< "Error opening the file." <<endl;
		return 1;  // Return with an error code
	}

	// Read and display characters from the file
	char character;
	while (inputFile.get(character)) {
	  cout << character;
	}
	// Close the file
	inputFile.close();
	system("pause");
	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string inputString;

	// Get the string from the user
	cout << "Enter a string to write to the file: ";
	getline(cin, inputString);

	// Open a file for writing
	ofstream outputFile("example.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the file for writing." <<endl;
		return 1;  // Return with an error code
	}

	// Write the string to the file
	outputFile << inputString;

	// Close the file
	outputFile.close();

	cout << "String successfully written to the file." <<endl;

	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile("example.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout << "Error opening the file." <<endl;
		return 1;  // Return with an error code
	}
	char character;
	int charCount = 0;
	// Read characters from the file and count them
	while (inputFile.get(character)) {
		charCount++;
	}
	// Close the file
	inputFile.close();
	// Print the result
	cout << "Total number of characters in the file: " << charCount <<endl;

	return 0;}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Named structure Student
struct Student {
	string name;
	int age;
	double cgpa;
	string dob;
	string placeOfBirth;
};

int main() {
	// Create and open the file for writing
	ofstream outputFile("Data.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the file for writing." << endl;
		return 1;  // Return with an error code
	}

	// Array to store information about five students
	Student students[5];

	// Input information for each student
	for (int i = 0; i < 5; ++i) {
		cout << "Enter information for student " << i + 1 << ":\n";
		cout << "Name: ";
		getline(cin, students[i].name);

		cout << "Age: ";
		cin >> students[i].age;
		cin.ignore();  // Ignore the newline character

		cout << "CGPA: ";
		cin >> students[i].cgpa;
		cin.ignore();  // Ignore the newline character

		cout << "Date of Birth (DOB): ";
		getline(cin, students[i].dob);

		cout << "Place of Birth: ";
		getline(cin, students[i].placeOfBirth);

		// Write student information to the file
		outputFile << students[i].name << ',' << students[i].age << ',' << students[i].cgpa
			<< ',' << students[i].dob << ',' << students[i].placeOfBirth << '\n';

		cout << "Information saved for student " << i + 1 << endl;
	}

	// Close the file
	outputFile.close();

	cout << "Data saved to the file 'Data.txt'." << endl;

	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	// Open the input file for reading
	ifstream inputFile("Data.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout<< "Error opening the input file 'num.txt'." <<endl;
		return 1;  // Return with an error code
	}

	// Open the output file for writing
	ofstream outputFile("Data.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the output file 'sum.txt'." <<endl;
		inputFile.close();  // Close the input file before returning
		return 1;          // Return with an error code
	}

	int num1, num2, num3;

	// Read three numbers from each line, calculate the sum, and write to the output file
	while (inputFile >> num1 >> num2 >> num3) {
		int sum = num1 + num2 + num3;

		// Write the original three numbers and the sum to the output file
		outputFile << num1 << ' ' << num2 << ' ' << num3 << ' ' << sum <<endl;
	}

	// Close the input and output files
	inputFile.close();
	outputFile.close();
     cout << "Sum calculated and saved to 'sum.txt'." <<endl;

	return 0;
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include<vector>
using namespace std;
// Function to reverse the order of words in a string
string reverseWords(const string& input) {
	istringstream iss(input);
	vector <string> words(istream_iterator<string>{iss},
		istream_iterator<string>());

	reverse(words.begin(), words.end());

	ostringstream oss;
	for (const auto& word : words) {
		oss << word << " ";
	}

	return oss.str();
}

int main() {
	// Open the input file for reading
	ifstream inputFile("Data.txt");

	// Check if the file is successfully opened
	if (!inputFile.is_open()) {
		cout << "Error opening the input file 'input.txt'." <<endl;
		return 1;  // Return with an error code
	}

	// Open the output file for writing
	ofstream outputFile("Data.txt");

	// Check if the file is successfully opened
	if (!outputFile.is_open()) {
		cout << "Error opening the output file 'output.txt'." <<endl;
		inputFile.close();  // Close the input file before returning
		return 1;          // Return with an error code
	}
	string line;

	// Read each line from the input file, reverse the order of words, and write to the output file
	while (getline(inputFile, line)) {
		string reversedLine = reverseWords(line);
		outputFile << reversedLine <<endl;
	}

	// Close the input and output files
	inputFile.close();
	outputFile.close();
    cout << "Words reversed and saved to 'output.txt'." <<endl;

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
	cout << "\nMy phone number: " << myPhone.areaCode << "-" << myPhone.exchange << "-" << myPhone.number;
	cout << "\nYour phone numbe is: " << userPhone.areaCode << "-" << userPhone.exchange << "-" << userPhone.number;
	system("pause");
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
		cout << "Product quantity in stock: " << productInfo.quantity << endl;
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
	char grades;  // Assuming grades is a single character, modify accordingly
	float gpa;
};

void displayStudentRecord(const Student& st_record) {
	// Display the result in table form
	cout << "Student Record:" << endl;
	cout << "Name: " << st_record.name << endl;
	cout << "Enrollment Number: " << st_record.en_no << endl;
	cout << endl;

	// Display header
	cout << setw(25) << "Subjects" << setw(15) << "Credit Hours" << setw(15) << "Quiz Marks"
		<< setw(20) << "Assignment Marks" << setw(20) << "Final Exam Marks" << setw(10) << "Grades" << endl;

	// Display data in table form
	for (size_t i = 0; i < st_record.subjects.size(); ++i) {
		cout << setw(25) << st_record.subjects[i] << setw(15) << st_record.cr_hrs[i]
			<< setw(15) << st_record.q_marks[i] << setw(20) << st_record.a_marks[i]
			<< setw(20) << st_record.f_marks[i] << setw(10) << st_record.grades << endl;
	}
	cout << "GPA IS: 4.0" << endl;  // Adjust the GPA value accordingly
}

int main() {
	// Declare a variable st_record of type Student
	Student st_record;

	// Input information in data members
	st_record.name = "Samreen Farhat";
	st_record.en_no = "01-131232-079";
	st_record.subjects = { "Programming Fundamentals", "Compiler Construction", "OOP", "English", "Physics" };
	st_record.cr_hrs = { 4, 3, 3, 3, 4 };
	st_record.q_marks = { 90, 85, 88, 89 };
	st_record.a_marks = { 95, 88, 92, 89 };
	st_record.f_marks = { 75, 80, 78, 89 };
	st_record.grades = 'A';  // Use a single character for grades, not an array

	// Display the result in table form
	displayStudentRecord(st_record);
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector <int> myArray= {5, 2, 8, 1, 3};
	auto minIt= min_element (myArray.begin(), myArray.end());
	auto maxIt =max_element (myArray.begin(), myArray.end());
	int minValue = *minIt;
	int maxValue = *maxIt;
	cout << "Minimum value is:"<<minValue;
	cout << endl;
	cout <<"Maximum value is:"<< maxValue;
	// reverse 
	cout << endl;
	reverse(myArray.begin(), myArray.end());
	for (const auto & element : myArray)
	{
		cout << element << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int marks1[4] = { 25,45,56,89 };
	for (int i = 0; i < 4; i++)
	{
		cout << marks1[i];
		cout << endl;
	}
	int marks[5];
	for (int i = 0; i < 5; i++)
	{
		cin>> marks[i];
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cout<<"Marks are:"<<marks[i];
		cout << endl;
	}
	system("pause");
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int sum[5];
	int sum1 = 0,i;
	cout << "Enter the five integers: ";
	for ( i = 0; i < 5; i++)
	{
		cin >> sum[i];
		cout << "\t";
		sum1 = sum1 + sum[i];
	}
	cout << endl;
	cout << "Sum is: "<<sum1;
	system("pause");
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num[5];
	int even = 0, odd = 0;
	cout << "Enter the five integers: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
		cout << "\n";
		if (num[i] % 2 == 0)
		{
			cout << "Even number is: " << num[i];
			even++;
		}
		else
		{
			cout << "Odd number is: " << num[i];
			odd++;
		}
	}
	cout << endl;
	cout << "Total even numbers are:"<<even << endl;
	cout << "Total odd numbers are:" << odd << endl;
	system("pause");
	return 0;
}
//Develop a program to find the average of elements in a floating-point array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	float array[5];
	float avg = 0;
	cout << "Enter the five integers: ";
	for (int j = 0; j <5; j++)
	{
		cin >> array[j];
		cout << endl;
		avg = avg +( array[j] / 5);
	}
	cout << endl;
	cout << "Average is: " << avg;
	system("pause");
	return 0;
}
// wave program
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void convertToWave (vector<int> & arr ) {
	int n = arr.size();

	// Traverse all even-indexed elements
	for (int i = 0; i < n; i += 2) {
		// If the current element is smaller than the previous element, swap them
		if (i > 0 && arr[i] < arr[i - 1]) {
			swap(arr[i], arr[i - 1]);
		}

		// If the current element is smaller than the next element, swap them
		if (i < n - 1 && arr[i] < arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
		}
	}
}

int main() {
	vector<int> arr = { 3, 1, 4, 2, 5 };

	cout << "Original Array: ";
	for (const auto& element : arr) {
		cout << element << " ";
	}
	cout << endl;

	convertToWave(arr);

	cout << "Wave Array: ";
	for (const auto& element : arr) {
		cout << element << " ";
	}
	cout << endl;

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	const int rows = 2, cols = 3;
	int matrix1[rows][cols] = { {1, 2, 3}, {4, 5, 6} };
	int matrix2[rows][cols] = { {7, 8, 9}, {10, 11, 12} };
	int result[rows][cols];
	// Matrix Addition
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	// Displaying Result
	cout << "Resultant Matrix (Sum):" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
// transpose of a matrix:
#include <iostream>
using namespace std;
int main() {
	const int rows = 3, cols = 2;

	int matrix[rows][cols] = { {1, 2}, {3, 4}, {5, 6} };
	int transpose[cols][rows];

	// Transpose of Matrix
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			transpose[j][i] = matrix[i][j];
		}
	}

	// Displaying Result
	cout << "Original Matrix:" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Transposed Matrix:" << endl;
	for (int i = 0; i < cols; ++i) {
		for (int j = 0; j < rows; ++j) {
			cout << transpose[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
//second largest number
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	const int size = 5;
	int arr[size] = { 5, 2, 8, 1, 3 };
	sort(arr, arr + size);
	cout << "Second Largest Element: " << arr[size - 2] << endl;
	return 0;
}
// remove dulpicate
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	const int size = 8;
	int arr[size] = { 3, 2, 4, 1, 2, 3, 4, 1 };
	sort(arr, arr + size);
	// Removing Duplicates
	int uniqueSize = unique(arr, arr + size) - arr;
	cout << "Array after removing duplicates:" << endl;
	for (int i = 0; i < uniqueSize; ++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
//product of matrixs
#include <iostream>
using namespace std;
int main() {
	const int rows1 = 2, cols1 = 3, rows2 = 3, cols2 = 2;
	int matrix1[rows1][cols1] = { {1, 2, 3}, {4, 5, 6} };
	int matrix2[rows2][cols2] = { {7, 8}, {9, 10}, {11, 12} };
	int result[rows1][cols2];
	// Matrix Multiplication
	for (int i = 0; i < rows1; ++i) {
		for (int j = 0; j < cols2; ++j) {
			result[i][j] = 0;
			for (int k = 0; k < cols1; ++k) {
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	// Displaying Result
	cout << "Resultant Matrix (Product):" << endl;
	for (int i = 0; i < rows1; ++i) {
		for (int j = 0; j < cols2; ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
void shiftElements(int arr[], int size, int shiftBy) {
	for (int i = 0; i < shiftBy; ++i) {
		int temp = arr[0];
		for (int j = 1; j < size; ++j) {
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = temp;
	}
}
int main() {
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	int shiftBy;
	cout << "Enter the number of positions to shift: ";
	cin >> shiftBy;
	shiftElements(arr, size, shiftBy);
	cout << "Array after shifting " << shiftBy << " positions:" << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
#include <iostream>
using namespace std;
bool isPalindrome(const int arr[], int size) {
	for (int i = 0; i < size / 2; ++i) {
		if (arr[i] != arr[size - 1 - i]) {
			return false;
		}
	}
	return true;
}
int main() {
	const int size = 5;
	int arr[size] = { 1, 2, 3, 2, 1 };
	if (isPalindrome(arr, size)) {
		cout << "The array is a palindrome." << endl;
	}
	else {
		cout << "The array is not a palindrome." << endl;
	}
	return 0;
}
//	Merge Arrays :
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	const int size1 = 3, size2 = 4;
	int arr1[size1] = { 1, 3, 5 };
	int arr2[size2] = { 2, 4, 6, 7 };
	int merged[size1 + size2];
	// Merge Arrays
	merge(arr1, arr1 + size1, arr2, arr2 + size2, merged);
	// Displaying Result
	cout << "Merged Array:" << endl;
	for (int i = 0; i < size1 + size2; ++i) {
		cout << merged[i] << " ";
	}
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
void findCommonElements(const int arr1[], int size1, const int arr2[], int size2)
{
	int i = 0, j = 0;
	cout << "Common Elements: ";
	while (i < size1 && j < size2) {
		if (arr1[i] == arr2[j]) {
			cout << arr1[i] << " ";
			++i;
			++j;
		}
		else if (arr1[i] < arr2[j]) {
			++i;
		}
		else {
			++j;
		}
	}
	cout << endl;
}
int main() {
	const int size1 = 5, size2 = 4;
	int arr1[size1] = { 2, 4, 5, 7, 8 };
	int arr2[size2] = { 4, 5, 6, 8 };
	findCommonElements(arr1, size1, arr2, size2);
	return 0;
}
//Subarray with Given Sum :
#include <iostream>
using namespace std;
void findSubarrayWithSum(const int arr[], int size, int targetSum) 
{
	int start = 0, currentSum = 0;
	for (int end = 0; end < size; ++end) 
	{
		currentSum += arr[end];
		while (currentSum > targetSum && start < end) 
		{
			currentSum -= arr[start];
			++start;
		}
		if (currentSum == targetSum)
		{
			cout << "Subarray with sum " << targetSum << " found between indices " << start << " and " << end << endl;
			return;
		}
	}

	cout << "No subarray found with the given sum." << endl;
}
int main() {
	const int size = 7;
	int arr[size] = { 1, 2, 3, 4, 5, 6, 7 };
	int targetSum;

	cout << "Enter the target sum: ";
	cin >> targetSum;

	findSubarrayWithSum(arr, size, targetSum);

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
long long mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = left;
	long long count = 0;
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			// Inversion found
			temp[k++] = arr[j++];
			count += mid - i + 1;
		}
	}
	while (i <= mid) {
		temp[k++] = arr[i++];
	}
	while (j <= right) {
		temp[k++] = arr[j++];
	}

	for (i = left; i <= right; ++i) {
		arr[i] = temp[i];
	}
	return count;
}
long long mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
	long long count = 0;
	if (left < right) {
		int mid = (left + right) / 2;
		count += mergeSortAndCount(arr, temp, left, mid);
		count += mergeSortAndCount(arr, temp, mid + 1, right);
		count += mergeAndCount(arr, temp, left, mid, right);
	}
	return count;
}
long long countInversions(vector<int>& arr) {
	int size = arr.size();
	vector<int> temp(size);
	return mergeSortAndCount(arr, temp, 0, size - 1);
}
int main() {
	vector<int> arr = { 5, 2, 8, 1, 3 };
	cout << "Original Array: ";
	for (const auto& element : arr) {
		cout << element << " ";
	}
	cout << endl;
	long long inversions = countInversions(arr);
	cout << "Number of Inversions: " << inversions << endl;
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices)
{
	int n = prices.size();
	int profit = 0;
	for (int i = 1; i < n; ++i) 
	{
		// If the current price is greater than the previous price, add the profit
		if (prices[i] > prices[i - 1])
		{
			profit += prices[i] - prices[i - 1];
		}
	}
	return profit;
}
int main() {
	vector<int> stockPrices = { 7, 1, 5, 3, 6, 4 };
	cout << "Stock Prices: ";
	for (const auto& price : stockPrices) {
		cout << price << " ";
	}
	cout << endl;
	int profit = maxProfit(stockPrices);
	cout << "Maximum Profit: " << profit << endl;
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
bool canJump(vector<int>& nums)
{
	int n = nums.size();
	int maxReach = 0;
	for (int i = 0; i < n; ++i)
	{
		// If the current index is beyond the maximum reachable index, return false
		if (i > maxReach)
		{
			return false;
		}
		// Update the maximum reachable index
		maxReach = max(maxReach, i + nums[i]);
		// If the maximum reachable index is greater than or equal to the last index, return true
		if (maxReach >= n - 1) {
			return true;
		}
	}
	return false;
}
int main() {
	vector<int> jumpArray = { 2, 3, 1, 1, 4 };
	cout << "Array: ";
	for (const auto& element : jumpArray) 
	{
		cout << element << " ";
	}
	cout << endl;
	if (canJump(jumpArray))
	{
		cout << "You can reach the last index!" << endl;
	}
	else
		cout << "You cannot reach the last index." << endl;
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> generatePascalsTriangle (int numRows) 
{
	vector<vector<int>> triangle;
	for (int i = 0; i < numRows; ++i)
	{
		vector<int> row(i + 1, 1);
		for (int j = 1; j < i; ++j) 
		{
			row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
		}
		triangle.push_back(row);
	}
	return triangle;
}
void printPascalsTriangle(const vector<vector<int>>& triangle) {
	int numRows = triangle.size();
	cout << "Pascal's Triangle:" << endl;
	for (int i = 0; i < numRows; ++i) 
	{
		int numSpaces = numRows - i - 1;
		// Print leading spaces
		for (int s = 0; s < numSpaces; ++s) 
		{
			cout << "  ";
		}
		// Print values in the row
		for (int j = 0; j <= i; ++j) 
		{
			cout << triangle[i][j] << "   ";
		}
		cout << endl;
	}
}
int main() {
	int numRows;
	cout << "Enter the number of rows for Pascal's Triangle: ";
	cin >> numRows;
	vector<vector<int>> pascalsTriangle = generatePascalsTriangle(numRows);
	printPascalsTriangle(pascalsTriangle);
	return 0;
}
*/








