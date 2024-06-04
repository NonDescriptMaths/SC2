

#include <iostream>


int looper(int c){
    for (int i = 0; i < 10; i++)
    {
        c += 3*i;
    }
    return c;
}

int main()
{
    int i = 35;
    std::cout << "i is " << i << std::endl;
    if (i < 10)
    {
        std::cout << "i is less than 10" << std::endl;
    }
    else if (i >= 100)
    {
        std::cout << "i is more than or equal to 100" << std::endl;
    }
    else
    {
        std::cout << "i is somewhere between 10 and 100" << std::endl;
    }
    int a = looper(i);
    std::cout << "a is " << a << std::endl;
    if (a <10){
        std::cout << "a is less than 10" << std::endl;
    }
    else if (a >= 100)
    {
        std::cout << "a is more than or equal to 100" << std::endl;
    }
    else
    {
        std::cout << "a is somewhere between 10 and 100" << std::endl;
    }
    return 0;
}

