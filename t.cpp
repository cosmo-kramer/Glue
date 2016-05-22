#include "supporting_libs.h"

void pr_prime(long int n)
{
    for(long int i=2;i<=n;i++)
    {
        long int f = 0;
        for(long int j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                 f = 1;
            }
        }
        if(!f)
        {
            std::cout<<i;
        }
    }

}

int main( )
{
            long int num;
            std::cout<<"Num?";
            std::cin>>num;
std::cout<<num;
pr_prime(num);
 
return 0;
}

