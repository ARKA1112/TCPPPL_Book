#include <iostream>
#include <string>

int main(){

    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";

    const std::string exclam = "!";///THis is invalid as should be single quoted
    const std::string message = "Hello" + ", world" + exclam;


    std::cout << "Both are valid!";
}