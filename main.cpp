#include "Account.h"
#include "Display.h"
#include <fstream>

std::ostream& operator<<(std::ostream& userLogin, const Admin& ID)
{
	userLogin << ID.m_Username << "\n" << ID.m_Password << "\n";
	return userLogin;
}

int main()
{
	Display display;
	std::string input {};
	do 
	{
		display.mainPage();
		std::cin >> input;
		if (input == "login")
		{
			display.loginPage();
			system("cls");
		}
		else if(input == "register")
		{
			display.registerPage();
			system("cls");
		}
		else if (input == "recover")
		{
			display.recoverPage();
			system("cls");
		}
	} while (input != "quit");

	std::ofstream LOG;
	std::ifstream FILE;
	LOG.open("Login_Info.txt");
	if (!LOG.is_open())
	{
		cout << "ERROR::FILE CANT OPEN!\n";
	}
		
	FILE.open("Login_Info.txt");
	if (!FILE.is_open())
	{
		cout << "ERROR::FILE CANT OPEN!\n";
	}
	return 0;
}

