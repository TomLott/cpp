#include <string>
#include <iostream>

struct Data{
	std::string s1;
	int num;
	std::string s2;
};

void * serialize(void);
Data *deserialize(void * raw);



int main() {
	Data *s;
	std::srand(time(nullptr));

	void *pointer;

	pointer = serialize();

	s = deserialize(pointer);

	std::cout << "After deserialization." << std::endl;
	std::cout << "s1 is: "<< s->s1 << std::endl;
	std::cout << "s2 is: "<< s->s2 << std::endl;
	std::cout << "num is: "<< s->num << std::endl;


}

void * serialize(void) {
	char *q = new char[24];
	std::string alf1 = "abcdefghijklmnopqrstuvwxyz";
	std::string alf2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


	std::cout << "Serialized data" << std::endl;
	std::cout << "s1 is: ";
	for (int i = 0; i < 8; i++) {
		q[i] = alf1[rand() % 26];
		std::cout << q[i];
	}
	std::cout << std::endl;
	std::cout << "num is: ";
	int temp = std::rand() % 100;
	*reinterpret_cast<int *> (q + 8) = temp;

	for (int i = 0; i < 8; i++) {
		q[i + 12] = alf2[rand() % 26];
	}
	return (reinterpret_cast<void *>(q));
}

Data * deserialize(void *raw){
	Data *s = new Data;

	char *str;

	str = reinterpret_cast<char *>(raw);
	s->s1 = std::string(str, 8);
	s->num = *reinterpret_cast<int *>(str + 8);
	s->s2 = std::string(str + 12, 8);

	return (s);
}