#include "supporting_libs.h"

long int gcd(long int a,long int b)
{
                std::cout<<a<<"  "<<b;
                if(b==0)
                {
                                return a;
                }
                else
                {
                                return gcd(b,a%b);
                }

}

int main( )
{
long int inp = 80;
long int inp1 = 48;
long int a = gcd(inp,inp1);
std::cout<<a;
 
return 0;
}

