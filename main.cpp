#include <iostream>

//using namespace std;


namespace plus
{
    int x = 10;
    
    int abs(int x)
    {
        if (x < 0)
        {
            return -x;
        }
        else
        {
            return x;
        }
    }
    
    int math (int a, int b)
    {
        return(a+b);
    }
}

namespace minus
{
    int x = -20;
    
    int abs(int x)
    {
        if (x > 0)
        {
            return -x;
        }
        else
        {
            return x;
        }
        
    }
    
    int math (int a, int b)
    {
        return(a-b);
    }
    
}

int main()
{
    
    int a = 1; int b = 2;
    
    std::cout << " x1 = " << plus::x << std::endl;
    std::cout << " x2 = " << minus::x << std::endl;
    
    std::cout << "\n |a| = " << plus::abs(a) << std::endl;
    std::cout << " -|a| = " << minus::abs(a) << std::endl;
    
    std::cout << "\n a + b = " << plus::math(a,b) << std::endl;
    std::cout << " a - b = " << minus::math(a,b) << std::endl;
    
    
    return 0;
    }

