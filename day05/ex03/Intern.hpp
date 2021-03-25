#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {
private:
			typedef struct	forms
			{
				std::string names;
				Form *(*formGet)(std::string const &);
			}				t_forms;

public:
			Intern();
			~Intern();
			Intern(Intern const & src);
			Intern & operator = (Intern const & src);

			class noElement : public std::exception{
				const char * what() const throw();
			};

			Form * makeForm(std::string const & form, std::string const & target);

};


#endif
