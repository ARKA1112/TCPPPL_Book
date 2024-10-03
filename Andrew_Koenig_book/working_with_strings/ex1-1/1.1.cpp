#include <iostream>
#include <string>

int main(){

    std::cout << "please enter the first name: ";

    //read the name
    std::string name;
    std::cin >> name;

    //write a greeting
    std::cout <<"Hello "<<name<<"!"<<std::endl;
    return 0;
}