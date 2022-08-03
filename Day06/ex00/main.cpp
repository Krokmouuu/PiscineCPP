#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    Convert  conv;
    string value = argv[1];

    conv.printall(value, conv);
    return (0);
}