#include <iostream>
#include <string>

int main (void)
{
    {
        const std::string s = "a string";
    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
    std::cout << x << std::endl;
    return 0;
}