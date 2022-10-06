#include <iostream>
#include <string>
//Entier pair ou impair

char* parite(int x)
{
    if (x % 2 == 0)
        return (char*)"Pair";
    return (char*)"Impair";
}

int main()
{
    std::cout << "2 est " << parite(2) << "\n5 est " << parite(5);
    //std::cout << "test";
    return 0;
}