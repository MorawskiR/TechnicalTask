#include <iostream>
#include <regex>
#include <string>
class Person {
 private:
  std::string firstName_;

 public:
  Person();

  Person(const std::string& firstName);

 public:
  void greet() { std::cout << "hello " << firstName_ << " !\n"; }
  void setFirstName(const std::string& firstName);
};

// enum ErrorCode {
//   OK,
//   BadFirstName,
//   BadOtherName,
//   WrongEmail,
//   WrongTelephonenum,
//   other
// };
