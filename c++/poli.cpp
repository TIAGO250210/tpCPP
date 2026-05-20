// scopo, public, priveit , protect, quem acessa?
 // estado, virtual ou static ou nada , como vai se comportyar?
 // tipo , ous primitivos, e os colmplesos clase, stracte, , vector, liste, ect , que tipo de dado de retorno ?
 // nome nome criado
 
#include <iostream>

class  Animal{
    public:

    void som (){
        std::cout << "som de animal \n";
    }

    virtual void somVirtual(){
        std::cout << "som de animal \n";

    }
};

class Cachorro :public Animal{
    public:
    void som (){
        std::cout << " AUASUAUAUAUAU \n";


    }
    void somVirtual() override {
        std::cout << " AUASUAUAUAUAU \n";

    }

};


class Gato :public Animal{
    public:
    void som (){
        std::cout << " miau miau \n";
    }
    void somVirtual() override {

        std::cout << "miau miau miau \n";
    }

};

int main(){

    Gato gato;
    gato.somVirtual();

    Cachorro cachorro;
    //cachorro.som();

    Animal* animal = new Gato;// retorna um enderessopo
    animal = &gato;
    animal->som(); 
    animal->somVirtual();
    animal = &cachorro;
    animal->som(); 
    animal->somVirtual();


    return 0;
}