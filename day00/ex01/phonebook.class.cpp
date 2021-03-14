#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    exist = 0;
}
PhoneBook::~PhoneBook(){}

void	PhoneBook::setFirstName(std::string &s) {
    PhoneBook::_firstName = s;
}
void	PhoneBook::setLastName(std::string &s){ this->_lastName = s;}
void	PhoneBook::setNickname(std::string &s){ this->_nickname = s;}
void	PhoneBook::setLogin(std::string &s){ this->_login = s;}
void	PhoneBook::setPostalAddress(std::string &s) { this->_postalAddress = s;}
void	PhoneBook::setEmailAddress(std::string &s) { this->_emailAddress = s;}
void	PhoneBook::setPhoneNumber(std::string &s) { this->_phoneNumber = s;}
void	PhoneBook::setBirthdayDate(std::string &s) { this->_birthdayDate = s;}
void	PhoneBook::setFavoriteMeal(std::string &s) { this->_favoriteMeal  = s;}
void	PhoneBook::setUnderwearColor(std::string &s) { this->_underwearColor = s;}
void	PhoneBook::setDarkestSecret(std::string &s) {this->_darkestSecret = s;}

std::string &PhoneBook::getFirstName() { return (this->_firstName);}
std::string &PhoneBook::getLastName() { return (_lastName);}
std::string	&PhoneBook::getNickname()  { return (_nickname);}
std::string	&PhoneBook::getLogin()  { return (_login);}
std::string &PhoneBook::getPostalAddress()  {return (_postalAddress);}
std::string &PhoneBook::getEmailAddress()  { return (_emailAddress) ;}
std::string &PhoneBook::getPhoneNumber() { return (_phoneNumber);}
std::string &PhoneBook::getBirthdayDate() { return (_birthdayDate);}
std::string &PhoneBook::getFavoriteMeal() { return (_favoriteMeal);}
std::string &PhoneBook::getUnderwearColor() { return (_underwearColor);}
std::string &PhoneBook::getDarkestSecret() { return (_darkestSecret);}
