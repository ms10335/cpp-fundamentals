#include <iostream>
#include <string>

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"

std::string modifyString(std::string& text)
{
    return text="Other string";
}




int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
