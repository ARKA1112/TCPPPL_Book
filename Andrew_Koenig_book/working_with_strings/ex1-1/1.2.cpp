#include <iostream>
#include <string>

int main(){
    //take the name

    std::cout<<"please enter your name";
    std::string name;
    std::cin>>name;

    //build the message

    std::string greeting = "Hello, " + name + "!";

    //build the scond and the fourth lines of the output

    const std::string spaces(greeting.size() ,' '); //way to construct a variable
    const std::string second = "* " + spaces + " *";

    //build the first and fifth lines of the output
    const std::string first(second.size(), '*');
    const std::string stars(10,'$'); // this thing is called constructing the variable;

    // write it all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    std::cout << stars;
    return 0;
}
//single quotes for character literal''