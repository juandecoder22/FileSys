#include "Display.h"
#include <iostream>
#include <iomanip>
#include "Account.h"

void Display::mainPage()
{
	cout << std::setfill('*') << std::setw(40) << "\n";
	cout << " ACCOUT SYSTEM ACESS\n"; 
	cout << std::setfill('*') << std::setw(40) << "\n";
	cout << " Enter LOGIN for access to account\n"; 
	cout << " Press REGISTER to create new account\n";
	cout << " Press RECOVER for access to password to \n";
	cout << " Press QUIT to exit program\n";
	cout << std::setfill('*') << std::setw(40) << "\n";
}

void Display::loginPage()
{
	cout << std::setfill('*') << std::setw(40) << "\n";
	cout << "LOGIN SCREEN\n";
	cout << std::setfill('*') << std::setw(40) << "\n\n";
}
void Display::registerPage()
{
	cout << std::setfill('*') << std::setw(40) << "\n";
	cout << "REGISTER SCREEN\n";
	cout << std::setfill('*') << std::setw(40) << "\n";
	cout << "Enter new Username: ";
	//ENTER INPUT FOR USERNAME
	cout << "Enter new Password: ";
	//ENTER INPUT FOR PASSWORD
}
void Display::recoverPage()
{
	cout << std::setfill('*') << std::setw(40) << "\n";
	cout << "RECOVER PASSWORD\n";
	cout << std::setfill('*') << std::setw(40) << "\n";
}
