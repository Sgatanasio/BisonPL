#include <iostream>

#include "stringVariable.hpp"

void lp::StringVariable::read()
{
   std::cout << "Name of the StringVariable: ";
   std::cin >> this->_name;

   std::cout << "Token of the StringVariable: ";
   std::cin >> this->_token;
   std::cin.ignore();

   std::cout << "Type of the StringVariable: ";
   std::cin >> this->_type;
   std::cin.ignore();

   std::cout << "Value of the StringVariable: ";
   std::cin >> this->_value;
   std::cin.ignore();
}

void lp::StringVariable::write() const
{
  std::cout << "Name:" << this->getName() << std::endl;
  std::cout << "Token:" << this->getToken() << std::endl;
  std::cout << "Type:" << this->getType() << std::endl;
  std::cout << "Value:" << this->getValue() << std::endl;
}

lp::StringVariable &lp::StringVariable::operator=(const lp::StringVariable &n)
  {
		if (this != &n)
		{
			this->setName(n.getName());
			this->setToken(n.getToken());
			this->setType(n.getType());
			this->setValue(n.getValue());
		}
		return *this;
  }

namespace lp{

std::istream &operator>>(std::istream &i, lp::StringVariable &n)
{
  i >> n._name;
  i >> n._token;
  i.ignore();
  i >> n._type;
  i.ignore();
  i >> n._value;
  i.ignore();
  return i;
}

std::ostream &operator<<(std::ostream &o, lp::StringVariable const &n)
{
  o << n._name << std::endl;
  o << n._token << std::endl;
  o << n._type << std::endl;
  o << n._value << std::endl;
  return o;
}

}
