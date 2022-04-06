#include "header.hpp"


Person::Person()
 {
    firstName_ = "f";
    otherName_ = "o";
    EmailAddress_ = "e";
    TelephoneNum_ = "t";
    

}

Person::Person(const std::string & firstName,
            const std::string & other_name,
            const std::string & EmailAddress,
            const std::string & TelephoneNum)
            {
                firstName_ = firstName;
                otherName_ = other_name;
                EmailAddress_ = EmailAddress;
                TelephoneNum_ = TelephoneNum;
            }

void Person::setEmail(const std::string & EmailAddress)
{
//    if(Email_check(EmailAddress) == ErrorCode::OK)
//    {
//        EmailAddress_ = EmailAddress;
//        std::cout<<" assignment\n";
//    }
// //    std::cout<<"wrong assignment\n";
// //    EmailAddress_ = "";
    std::cout<<"wrong assignment\n";
    EmailAddress_ = EmailAddress;
}

ErrorCode Email_check(std::string & email)
{
    const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    if(regex_match(email,pattern))
    {
        return ErrorCode::OK;
    }
    else 
        return ErrorCode::WrongTelephonenum;
}