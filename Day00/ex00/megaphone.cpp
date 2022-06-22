#include <iostream>
#include <cstring>

int main(int argc, char **argv){
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else 
	{
		int j = 0;
		while (argv[++j])
    		for(size_t i = 0; i < strlen(argv[j]); i++)
    	  	  putchar(toupper(argv[j][i]));
    }
    std::cout << std::endl;
    return 0;
}