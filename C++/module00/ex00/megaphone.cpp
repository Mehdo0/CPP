#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
                std::cout << (char)std::toupper(av[i][j]);
            if (i < ac - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}