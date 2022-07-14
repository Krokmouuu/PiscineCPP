#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl complain;
    if (argc == 2)
        complain.complain(argv[1]);
    else
        complain.complain("NOTHING");
}