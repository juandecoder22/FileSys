#include "Admin.h"
#include <fstream>
using std::cout;
void mainPage();

std::ostream& operator<<(std::ostream& userLogin, const Admin& ID)
{
	userLogin << ID.m_Username << "\n" << ID.m_Password << "\n";
	return userLogin;
}
int main()
{
	mainPage();
	Admin ID("juandg168", "18Salazar", 101);
	std::cout << ID;
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
	LOG << ID << "\n";
	return 0;
}

