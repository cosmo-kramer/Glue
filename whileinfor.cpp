#include "supporting_libs.h"

void counter(long int n)
{
    for(long int i=1;i<=n;i++)
    {
        while(i>1)
        {
            std::cout<<i;
             i = i-1;
        }
    }
    std::cout<<'\n';

}

int main( )
{
counter(10);
 
return 0;
}

