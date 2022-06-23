#include "Admin.h"
Admin::Admin(string Username, string Password, int Key)
	: m_Username(Username), m_Password(Password), m_Key(Key)
{
}
void Admin::setUsername(string Username)
{
	m_Username = Username;
}
void Admin::setPassword(string Password)
{
	m_Password = Password;
}
void Admin::setKey(int Key)
{
	m_Key = Key;
}
string Admin::getUsername()
{
	return m_Username;
}
string Admin::getPassword()
{
	return m_Password;
}
int Admin::getKey()
{
	return m_Key;
}
