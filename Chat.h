#pragma once
#include <string>
#include <fstream>
class User {
	std::string _name;
	std::string _login;
	std::string _pass;
public:
	User(std::string name, std::string login, std::string pass) :_name(name), _login(login), _pass(pass) {}
	friend std::istream& operator >>(std::istream& is, User& obj);
	friend std::ostream& operator <<(std::ostream& os, const User& obj);
};
class Message {
	std::string _sender;
	std::string _receiver;
	std::string _text;
public:
	Message(std::string sender, std::string receiver, std::string text) : _sender(sender), _receiver(receiver), _text(text) {}

	friend std::fstream& operator >>(std::fstream& is, Message& obj);
	friend std::ostream& operator <<(std::ostream& os, const Message& obj);

	std::string getText() const;
};