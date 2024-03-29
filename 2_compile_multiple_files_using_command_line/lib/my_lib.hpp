# include <iostream>


class Person
{
private:
    std::string name;

public:
    std::string get_name();
    void set_name(std::string name);

    Person(std::string name);
    ~Person();
};



