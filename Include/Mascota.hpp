#progama one
#Alimento.hpp
class Mascota
{
private:
    int vida
public:
    Mascota();

  this->vida = 0;

    ~Mascota(){}
    void come(Alimento alimento){
   vida += alimento. ExtraerEnergia();

    }
};

