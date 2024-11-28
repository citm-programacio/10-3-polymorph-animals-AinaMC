// 10.3 Polymorph Animals.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sonido()=0; //Permite que todos los SONIDO() empiezen asi
   // {
    //    cout << " El animal hace un sonido: ";
    //}
};

class Perro : Animal
{
public:
    void sonido() override
    {
        cout << "woof woof";
    }
};
class Gato : Animal
{
public:
    void sonido() override
    {
        cout << "miau";
    }
};
class Pato : Animal
{
public:
    void sonido() override
    {
        cout << "quack quack";
    }
};

int main()
{
    Animal* animal1 = new Perro();
    Gato* animal2 = new Gato();
    Pato* animal3 = new Pato();

    animal1->sonido();
    animal2->sonido();
    animal3->sonido();
}

