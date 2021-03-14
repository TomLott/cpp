#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE  FEADBACK NOISE *" << std::endl;
    else {
        for (int j = 1; j < argc; j++){
            for (int i = 0; i < (int)strlen(argv[j]); i++){
                argv[j][i] = toupper(argv[j][i]);
            }
            std::cout << argv[j];
        }
        std::cout << std::endl;
    }
}