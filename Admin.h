#pragma once
#include <iostream>
using std::string;

class Admin
{
private:
	string m_Username;
	string m_Password;
	int m_Key;

public:
	Admin(string, string, int);
	void setUsername(string);
	void setPassword(string);
	void setKey(int);
	string getUsername();
	string getPassword();
	int getKey();
	friend std::ostream& operator<<(std::ostream& os, const Admin& ID);
};
