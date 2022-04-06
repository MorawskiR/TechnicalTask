#include <string>
#include <iostream>
#include<regex>
class Person{

private:
    std::string firstName_;
    std::string otherName_;
    std::string EmailAddress_;
    std::string TelephoneNum_;
public:
    Person();
   
    Person(const std::string & firstName,
           const std::string & otherName,
           const std::string & EmailAddress,
           const std::string & TelephoneNum);
public:

void greet()
    {
        std::cout<<"hello "<<firstName_<<" !\n";
        std::cout<<"second name "<<otherName_<<" !\n";
        std::cout<<"email "<<EmailAddress_<<" !\n";
        std::cout<<"tel "<<TelephoneNum_<<" !\n";
    }
void setFirstName(const std::string & firstName)
    {
        firstName_ = firstName;
    }
void setOtherName(const std::string & otherName)
    {
        otherName_ = otherName;
    }
void setEmail(const std::string & EmailAddress);
    // {
    //     EmailAddress_ = EmailAddress;
    // }
void setPhone(const std::string & TelephoneNum)
{
    TelephoneNum_ = TelephoneNum;
}
};

enum ErrorCode {
    OK,
    BadFirstName,
    BadOtherName,
    WrongEmail,
    WrongTelephonenum,
    other
};

ErrorCode Email_check(const std::string & email);