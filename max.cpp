#include "supporting_libs.h"

long int maxi(long int a,long int b,long int c)
{
    long int m = a;
    if(b>m)
    {
         m = b;
    }
    if(c>m)
    {
         m = c;
    }
    return m;

}

int main( )
{
std::cout<<maxi(10,20,30);
 
return 0;
}

