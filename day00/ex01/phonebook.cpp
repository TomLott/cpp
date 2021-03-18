#include "phonebook.hpp"

static void fulfilling(PhoneBook &person){
    std::string s;

    person.exist = 1;
    std::cout << "First name is: ";
    std::getline(std::cin, s);
	person.setFirstName(s);

    std::cout << "Last name is: ";
    std::getline(std::cin, s);
    person.setLastName(s);

    std::cout << "Nickname is: ";
    std::getline(std::cin, s);
    person.setNickname(s);

    std::cout << "Login is: ";
    std::getline(std::cin, s);
    person.setLogin(s);

    std::cout << "Postal address is: ";    
    std::getline(std::cin, s);
    person.setPostalAddress(s);

    std::cout << "Email is : ";
    std::getline(std::cin, s);
    person.setEmailAddress(s);

    std::cout << "Phone number is: ";
    std::getline(std::cin, s);
    person.setPhoneNumber(s);

    std::cout << "Birthday date is: ";
    std::getline(std::cin, s);
    person.setBirthdayDate(s);

    std::cout << "Favorite meal is: ";
    std::getline(std::cin, s);
    person.setFavoriteMeal(s);

    std::cout << "Underwear color is: ";
    std::getline(std::cin, s);
    person.setUnderwearColor(s);

    std::cout << "Darkest Secret is: ";
    std::getline(std::cin, s);
    person.setDarkestSecret(s);

    std::cout << "Done." << std::endl;
}

static int ft_add(PhoneBook person[8])
{
    int i = 0;

    while (i < 8 && person[i].exist != 0)
        i++;
    if (i == 8)
    {
        std::cout << "List is full. You can only add 8 records. Sorry" << std::endl;
        return (0);
    }
    fulfilling(person[i]);
    return (0);
}

static int ft_start()
{
    std::string command;

    std::cout << "phonebook: ";
    std::getline(std::cin, command);
    if (std::cin.eof())
        return (-1);
    else if (!command.compare("ADD"))
        return (1);
    else if (!command.compare("EXIT"))
        return (-1);
    else if (!command.compare("SEARCH"))
        return (2);
    else {
        std::cout << "command not found" << std::endl;
        return (0);
    }
}

static void ft_get_info(PhoneBook &person){
	std::cout << "First name: " << person.getFirstName() << std::endl;
	std::cout << "Last name : " << person.getLastName() << std::endl;
	std::cout << "Nickname  : " << person.getNickname() << std::endl;
	std::cout << "Login     : " << person.getLogin() << std::endl;
	std::cout << "Postal add: " << person.getPostalAddress() << std::endl;
	std::cout << "Email add : " << person.getEmailAddress() << std::endl;
	std::cout << "Phone num : " << person.getPhoneNumber() << std::endl;
	std::cout << "Birthday  : " << person.getBirthdayDate() << std::endl;
	std::cout << "Fav meal  : " << person.getFavoriteMeal() << std::endl;
	std::cout << "Underwear : " << person.getUnderwearColor() << std::endl;
	std::cout << "Secret    : " << person.getDarkestSecret() << std::endl;
}

static int ft_search(PhoneBook person[8]) {
	int count = 0;
	int i = 0;
	std::string tmp;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "| index    |first name| last name| nickname |" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	while (i < 8 && person[i].exist == 1) {
		std::cout << "|" << i + 1;
		std::cout << "         |";

		tmp = person[i].getFirstName();
		std::cout << tmp.substr(0, 9);
		if (tmp.length() > 9)
			std::cout << ".";
		count = 10 - (int) tmp.length();
		while (count-- > 0)
			std::cout << " ";
		std::cout << "|";

		tmp = person[i].getLastName();
		std::cout << tmp.substr(0, 9);
		if (tmp.length() > 9)
			std::cout << ".";
		count = 10 - (int) tmp.length();
		while (count-- > 0)
			std::cout << " ";
		std::cout << "|";

		tmp = person[i].getNickname();
		std::cout << tmp.substr(0, 9);
		if (tmp.length() > 9)
			std::cout << ".";
		count = 10 - (int) tmp.length();
		while (count-- > 0)
			std::cout << " ";
		std::cout << "|";

		std::cout << std::endl;
		i++;
	}
	std::cout << "____________________________________________" << std::endl
			  << std::endl;
	std::cout << "If you want to know any specific information, " << std::endl
			  << "please enter index. Otherwise, text anything or" << std::endl
			  << "just press Enter" << std::endl;

	getline(std::cin, tmp, '\n');
	const char *s = tmp.c_str();

	if (strcmp(s, "")) {
		for (int i = 0; i < strlen(s); i++){
			if (isdigit(s[i]))
				;
			else
				return (0);
		}
		i = atoi(s) - 1;
		if (i >= 0 && i < 8 && person[i].exist == 1)
			ft_get_info(person[i]);
	}
    return (0);
}

static void promt(){
    std::cout << "     Welcome to Phonebook.    " << std::endl;
    std::cout << "You can choose next options: " << std::endl;
    std::cout << "|ADD|" << std::endl;
    std::cout << "|SEARCH|" << std::endl;
    std::cout << "|EXIT|" << std::endl;
}

int main()
{
    int status = 0;
    PhoneBook person[8];
    
    promt();
    while (status != -1)
    {
        if (status == 0)
            status = ft_start();
        else if (status == 1)
            status = ft_add(person);
        else if (status == 2)
            status = ft_search(person);
    }
    std::cout << std::endl << "Goodbye!" << std::endl;
}