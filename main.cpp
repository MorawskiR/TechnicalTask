
#include <iostream>
#include "header.hpp"
int main()
{
    Person* person = new Person;
    person->greet();
    person->setFirstName("czlowiek");
    person->greet();
    person->setFirstName("");
    person->greet();

    std::vector<Person*> persons;
    persons.emplace_back(person);

}