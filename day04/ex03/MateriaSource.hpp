#include "IMateriaSource.hpp"
#include "AMateria.hpp"



class MateriaSource : public IMateriaSource {
private:
    int _count;
    AMateria    *_aMateria[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const & src);
    MateriaSource & operator=(MateriaSource const & src);

    void learnMateria(AMateria *src);
    AMateria * createMateria(std::string const & type);

};
