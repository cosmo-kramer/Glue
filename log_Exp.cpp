#include "supporting_libs.h"

void f(long int n)
{
    std::cout<<n;

}

long int p(long int x,long int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return x;
    }
    else
    {
        long int r = p(x,n/2);
        return r*r*p(x,n%2);
    }

}

int main( )
{
        long int b;
        std::cout<<"base?";
        std::cin>>b;
        long int e;
        std::cout<<"exp?";
        std::cin>>e;
std::cout<<p(b,e);
 
return 0;
}

