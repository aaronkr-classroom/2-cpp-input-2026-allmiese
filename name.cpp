// name.cpp
#include <iostreqm>
#include <string>

int main (void) {
    std::cout << "First name: >>";
    std::string name;
    std::cin >> name;

    const std::string greeting = << "Hello, " + name + "!";
    
    /*
    **************** => 1st
    *              * => 2nd
    * Hello Albina * => 3rd
    *              * => 4th
    **************** => 5th
    */

    const std::string spaces(greeting.size(), '');
    const std::string second = "* " + spaces + " *";

    const std::string first(second.size(), '*');

    std::cout 
    << std::endl
    << first << std::endl
    << second << std::endl
    << "* " << greeting << " *" << std::endl
    << second << std::endl
    << first << std::endl
    << std::endl;

    return 0;
}