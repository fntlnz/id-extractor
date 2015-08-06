#include <iostream>
#include "command/extractor.h"

void usage()
{
    std::cout << "id-extractor" << std::endl;
    std::cout << "\tid-extractor <filepath>" << std::endl;
}

int main(int argc, char *argv[])
{
    Command::Extractor *extr = new Command::Extractor;
    extr->detectObject(argc, argv);
    return 1;
}
