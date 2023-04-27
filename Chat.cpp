#include "Chat.h"
#include <iomanip>
std::istream& operator >>(std::istream& is, User& obj)
{
	is.seekg(7, std::ios_base::cur);
	is >> obj._name;
	is.seekg(-7 - obj._name.size(), std::ios_base::cur);
	is.seekg(24, std::ios_base::cur);
	is >> obj._login;
	is.seekg(-24 - obj._login.size(), std::ios_base::cur);
	is.seekg(44, std::ios_base::cur);
	is >> obj._pass;
	return is;
}
std::ostream& operator <<(std::ostream& os, const User& obj)
{
	os << "name = ";
	os << std::left << std::setw(8) << obj._name;
	os << " login = ";
	os << std::left << std::setw(8) << obj._login;
	os << " password = ";
	os << std::left << std::setw(8) << obj._pass;
	return os;
}
std::fstream& operator >>(std::fstream& is, Message& obj)
{
	is.seekg(9, std::ios_base::cur);
	is >> obj._sender;
	is.seekg(-9 - obj._sender.size());
	is.seekg(29, std::ios_base::cur);
	is >> obj._receiver;
	is.seekg(-29 - obj._receiver.size());
	is.seekg(45, std::ios_base::cur);
	is >> obj._text;
	return is;
}
std::ostream& operator <<(std::ostream& os, const Message& obj)
{
	os << "sender = ";
	os << std::left << std::setw(8) << obj._sender;
	os << " receiver = ";
	os << std::left << std::setw(8) << obj._receiver;
	os << " text = ";
	os << std::left << obj._text;
	return os;
}
std::string Message::getText() const
{
	return _text;
}