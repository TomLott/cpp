#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:
				std::string _name;
				static std::string const _trees[3];
				ShrubberyCreationForm();
public:
				ShrubberyCreationForm(std::string const & target);
				~ShrubberyCreationForm();
				ShrubberyCreationForm(ShrubberyCreationForm const & src);
				ShrubberyCreationForm & operator = (ShrubberyCreationForm const & src);

				void makeTree();
				std::string const  static & getTree(int i);

				void makeExecution() const;
};


#endif
