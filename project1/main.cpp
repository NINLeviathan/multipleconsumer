#include <iostream>

#include "message.h"

int main(int argc, char const *argv[])
{
    std::cout << "I'm a consumer" << std::endl;
    std::cout << "I am outputting the following lines from the modules that I consume:" << std::endl;

    Message Message;
    std::cout << Message.TheMessage() << std::endl;
    return 0;
}
