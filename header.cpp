#include "header.hpp"


Person::Person()
 {
    firstName_ = "noname";
}

Person::Person(const std::string & firstName)
        {
            firstName_ = firstName;
        }


void Person::setFirstName(const std::string & firstName)
{
    if(firstName.length() > 20) {
        throw std::runtime_error("WRONG NAME\n");
    }
    firstName_= firstName;
}