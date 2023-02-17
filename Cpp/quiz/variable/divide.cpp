#include <iostream>

int main()
{
    std::cout << "2/10 = " << 2 / 10 << std::endl;
    std::cout << "2./10 = " << 2. / 10 << std::endl;
    std::cout << "2/10. = " << 2 / 10. << std::endl;
    std::cout << "2./10. = " << 2. / 10. << std::endl;
    std::cout << "2/10 = " << (float)2 / 10 << std::endl;

    return 0;
}