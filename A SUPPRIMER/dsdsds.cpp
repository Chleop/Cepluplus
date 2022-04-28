# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

int main(void)
{
    int             amounts [] = {1, 2, 3, 55, 44};
    size_t const    amounts_size( sizeof(amounts));

    std::cout << amounts_size << std::endl;
    return 0;
}