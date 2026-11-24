/*
Lab     : 01-T3
Name    : Alishba Sarfraz
Roll No : 26-SE-10
Date    : 23-11-2026
Purpose : Fix bugs
*/
#include <iostream>
using namespace std; //BUG 1:missing ; after std

int main()
{
cout << "Welcome to the lab!" << endl; //BUG 2:missing ; at end
cout << "Today we learn \"C++\"." << endl; //BUG 3:Cout should be in lower case 
cout << "Files are in C:\\Lab01" << endl; //BUG 4:Backslash must be written as // to print one / corectly	
cout << "Bye!" << endl; // BUG 5:Closing quote at the end of Bye	
	return 0;
}
