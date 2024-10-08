// the concept of exposing only the essential features of an object or system, while hiding the underlying implementation details.It allows developers to interact with objects at a high level, focusing on what an object does rather than how it performs its functions.
// abstraction is often achieved through abstract classes and interfaces by using pure virtual functions that must be implemented by derived classes, ensuring that the essential operations are defined without revealing the internal complexities.

#include <iostream>
#include <string>

// Base class
class Animal
{
public:
    Animal(std::string name) : name(name) {}

    // Virtual method
    virtual void makeSound()
    {
        std::cout << name << " makes a sound." << std::endl;
    }

protected:
    std::string name;
};

// Derived class inheriting from Animal
class Dog : public Animal
{
public:
    Dog(std::string name) : Animal(name) {}

    // Overriding the makeSound method
    void makeSound() override
    {
        std::cout << name << " barks." << std::endl;
    }
};

// Another derived class
class Cat : public Animal
{
public:
    Cat(std::string name) : Animal(name) {}

    // Overriding the makeSound method
    void makeSound() override
    {
        std::cout << name << " meows." << std::endl;
    }
};

int main()
{
    Animal *animals[2];
    animals[0] = new Dog("Buddy");
    animals[1] = new Cat("Whiskers");

    for (int i = 0; i < 2; ++i)
    {
        animals[i]->makeSound();
    }

    // Clean up
    delete animals[0];
    delete animals[1];

    return 0;
}
