void memoryLeak(){
	std::string* panther = new std::string("Strign panther");
	std::cout << *panther << std::endl;

	delete panther;
}