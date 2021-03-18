#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

static std::string replacing(std::string s1, std::string s2, std::string buff){
	size_t i = 0;
	size_t j = 0;
	std::stringstream newLine;

	for (; i < buff.length(); i++){
		j = 0;
		while(buff[j + i] == s1[j] && j < s1.length()	)
			j++;
		if (j == s1.length()){
			newLine << s2;
			i = i + j - 1;
		}
		else{
			newLine << buff[i];
		}
	}
	std::string line = newLine.str();
	return (line);
}

static void do_magic(std::string s1, std::string s2, std::ifstream &ifs, std::string fileName){
	std::string buffer;
	std::ofstream replace;

	replace.open(fileName + ".replace");
	while (std::getline(ifs, buffer)){
		replace << replacing(s1, s2, buffer) << std::endl;}
	ifs.close();
	replace.close();
}

int main(int argc, char **argv){
	std::string fileName;
	std::string s1;
	std::string s2;
	std::ifstream  ifs;

	if (argc != 4){
		std::cout << "Not right amount of arguments" << std::endl;
		return (1);
	}
	if ((!argv[1] || !argv[2] || !argv[3])  || (!argv[1][0] || !argv[2][0] || !argv[3][0])) {
		std::cout << "Empty argument" << std::endl;
		return (1);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ifs.open(fileName);
	if (!ifs.is_open()){
		std::cout << "Can't open file or file does not exist." << std::endl;
		return (1);
	}
	do_magic(s1, s2, ifs, fileName);

}

