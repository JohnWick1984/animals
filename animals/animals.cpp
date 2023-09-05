// animals.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
    Animal(const string& name, const string& species)
        : name(name), species(species) {}

    void setName(const string& newName)
    {
        name = newName;
    }

    string getName() const
    {
        return name;
    }

    string getSpecies() const
    {
        return species;
    }

    virtual void makeSound() const = 0;

private:
    string name;
    string species;
};

class Dog : public Animal
{
public:
    Dog(const string& name, const string& breed)
        : Animal(name, "Dog"), breed(breed) {}

    void makeSound() const override
    {
        cout << "Bow wow!" << endl;
    }

private:
    string breed;
};

class Cat : public Animal 
{
public:
    Cat(const string& name, const string& color)
        : Animal(name, "Cat"), color(color) {}

    void makeSound() const override
    {
        cout << "Mew-mew!" << endl;
    }

private:
    string color;
};

class Parrot :  public Animal
{
public:
    Parrot(const string& name, const string& featherColor)
        : Animal(name, "Parrot"), featherColor(featherColor) {}

    void makeSound() const override
    {
        cout << "Polly wants a cookie!" << endl;
    }

private:
    string featherColor;
};

int main() 
{
    Dog dog("Jack", "Labrador");
    Cat cat("Tom", "Gray");
    Parrot parrot("Polly", "Yellow-green");

    cout << "I have 3 animals at home:" << endl;
    cout << dog.getName() << " (" << dog.getSpecies() << ")" << endl;
    cout << cat.getName() << " (" << cat.getSpecies() << ")" << endl;
    cout << parrot.getName() << " (" << parrot.getSpecies() << ")" << endl;

    cout << "Dog says: ";
    dog.makeSound();
    cout << "Cat says: ";
    cat.makeSound();
    cout << "Parrot says: ";
    parrot.makeSound();

    return 0;
}
