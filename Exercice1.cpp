#include <iostream>
//determiner le plus grand et le plus petit des 3 entiers

class Extremum
{
    public:
    int max;
    int min;
};

Extremum max_min(int num1, int num2, int num3)
{
    Extremum output;

    if (num1 > num2)
    {
        output.max = num1;
        output.min = num2;
    }
    else
    {
        output.max = num2;
        output.min = num1;
    }
    
    if (num3 > output.max)
        output.max = num3;
    else if ( output.min > num3)
        output.min = num3;
    
    return output;
}

int main()
{
    Extremum numbers = max_min(1,2,3);
    std::cout << "Nombre max est " << numbers.max << '\n' << "Nombre min est " << numbers.min << '\n';
    return 0;
}