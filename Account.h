#pragma once
#include <iostream>
using std::string;
using std::cin;
using std::cout;

class Admin
{
private:
	string m_Username;
	string m_Password;
	int m_Key;

public:
	Admin() = default;
	//Admin(string);
	Admin(string);
	Admin(int);
	Admin(string, string, int);
	void setUsername(string);
	void setPassword(string);
	void setKey(int);
	string getUsername();
	string getPassword();
	int getKey();
	friend std::ostream& operator<<(std::ostream& os, const Admin& ID);
};
