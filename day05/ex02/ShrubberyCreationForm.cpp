#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreation", 145, 137) {
	_name = "ShrubberyCreation";
	setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &src) : Form(src) {

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &src) {
	if (this != &src){
		Form::operator=(src);
	}
	return (*this);
}

std::string const ShrubberyCreationForm::_trees[3] = {
				"..........\n"\
				"...****...\n"\
				"..******..\n"\
				"...****...\n"\
				"....||....\n"\
				"....||....\n"\
				"....||....\n"\
				"..........\n",
				"..........\n"\
				"..******..\n"\
				".**@**@**.\n"\
				"...**@**..\n"\
				"....||....\n"\
				"....||....\n"\
				"....||....\n"\
				"..........\n",
			 	"..........\n"\
				"...*&**...\n"\
				"..*&**&*..\n"\
				"...**&*...\n"\
				"....||....\n"\
				"....||....\n"\
				"....||....\n"\
				"..........\n"
};


std::string const & ShrubberyCreationForm::getTree(int i){
	return (_trees[i]);
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 0, 0){
}

void ShrubberyCreationForm::makeExecution() const {
	std::string fileName;
	fileName = _name + "_tree";

	std::ofstream file;
	file.exceptions(std::ofstream::badbit);

	try{
		file.open(fileName);
	}
	catch (std::exception & e){
		std::cout << "File opening/creating exception" << std::endl;
	}
	for (int i = 0; i < 3; i++){
		std::string tree = getTree(i);
		file << tree;
	}
	file.close();
	std::cout << _name << " has been executed well" << std::endl;
}