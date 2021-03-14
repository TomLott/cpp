#include <string>
#include <iostream>
#include <stdio.h>

class PhoneBook{
	public:
	
		int 		exist;

		PhoneBook();
		~PhoneBook();

		void	setFirstName(std::string &s);
		void	setLastName(std::string &s);
		void	setNickname(std::string &s);
		void	setLogin(std::string &s);
		void	setPostalAddress(std::string &s);
		void	setEmailAddress(std::string &s);
		void	setPhoneNumber(std::string &s);
		void	setBirthdayDate(std::string &s);
		void	setFavoriteMeal(std::string &s);
		void	setUnderwearColor(std::string &s);
		void	setDarkestSecret(std::string &s);
			
		std::string &getFirstName();
		std::string &getLastName();
		std::string	&getNickname();
		std::string	&getLogin();
		std::string &getPostalAddress();
		std::string &getEmailAddress();
		std::string &getPhoneNumber();
		std::string &getBirthdayDate();
		std::string &getFavoriteMeal();
		std::string &getUnderwearColor();
		std::string &getDarkestSecret();

private:

		std::string _index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;
};