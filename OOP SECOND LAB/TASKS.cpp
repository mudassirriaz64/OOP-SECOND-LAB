#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    Animal(int age) : age(age) {}
    virtual void makeSound() const = 0;
    virtual void eat() const = 0;
};

class Lion : public Animal
{
public:
    Lion(int age) : Animal(age) {}
    void makeSound() const override
    {
        cout << "Lion is " << age << " years old\n";
        cout << "Lion Says Roar!\n";
    }
    void eat() const override
    {
        cout << "Lion is eating meat.\n";
    }
};

class Elephant : public Animal
{
public:
    Elephant(int age) : Animal(age) {}
    void makeSound() const override
    {
        cout << "Elephant is " << age << " years old\n";
        cout << "Elephant Trumpet!\n";
    }
    void eat() const override
    {
        cout << "Elephant is eating grass.\n";
    }
};

class Monkey : public Animal
{
public:
    Monkey(int age) : Animal(age) {}
    void makeSound() const override
    {
        cout << "Monkey is " << age << " years old\n";
        cout << "Monkey Says Ooh ooh, eee eee!\n";
    }
    void eat() const override
    {
        cout << "Monkey is eating bananas.\n";
    }
};

class Bird : public Animal
{
public:
    Bird(int age) : Animal(age) {}
    void makeSound() const override
    {
        cout << "Bird is " << age << " years old\n";
        cout << "Bird Says Chirp!\n";
    }
    void eat() const override
    {
        cout << "Bird is eating seeds.\n";
    }
};

void hearSound(const Animal& animal)
{
    animal.makeSound();
}

void seeEating(const Animal& animal)
{
    animal.eat();
}

int main()
{
    Lion lion(5);
    Elephant elephant(10);
    Monkey monkey(3);
    Bird bird(2);

    hearSound(lion);
    seeEating(lion);
    cout<<"***********************\n";
    hearSound(elephant);
    seeEating(elephant);
    cout << "***********************\n";
    hearSound(monkey);
    seeEating(monkey);
    cout << "***********************\n";
    hearSound(bird);
    seeEating(bird);
    cout << "***********************\n";
    return 0;
}
