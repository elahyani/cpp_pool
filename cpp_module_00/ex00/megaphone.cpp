#include <iostream>

int     main(int argc, char **argv)
{
    int     i = 1;
    int     j = 0;
    char    **str = argv;

    if (argc > 1)
    {
        while (str[i])
        {
            j = 0;
            while (str[i][j])
            {
                str[i][j] = toupper(str[i][j]);
                std::cout << str[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}