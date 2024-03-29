#include "my_lib.hpp"

std::string Person::get_name()
{
    return name;
}

void Person::set_name(std::string name)
{
    this->name = name;
}

Person::Person(std::string name)
{
    set_name(name);
}

Person::~Person()
{
}
