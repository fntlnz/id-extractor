#include <iostream>
#include "command/extractor.hpp"

void usage()
{
    std::cout << "id-extractor" << std::endl;
    std::cout << "\tid-extractor <filepath>" << std::endl;
}

int main(int argc, char *argv[])
{
    Command::Extractor *extractor = new Command::Extractor();
    return extractor->demo();
}
