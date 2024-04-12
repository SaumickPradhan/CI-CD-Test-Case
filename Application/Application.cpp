// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"


CoolClass::CoolClass(void)
{


}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 - a;
    }
    else if(a>b)
    {
        return a + b;
    }
    else
    {
        return a * b;
    }
   
}
int CoolClass::Ming (int c, int d)
{
    if (c > d)
    {
        return c + d;

    }
    else
    {
        return c - d;
    }
}
