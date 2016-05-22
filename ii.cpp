#include "supporting_libs.h"

void hanoi(long int n,artificial_string a,artificial_string b,artificial_string c)
{
    if(n==1)
    {
        std::cout<<"Move from disk"<<"  "<<a<<"  "<<"to"<<"  "<<c<<"  "<<"\n";
    }
    else
    {
        hanoi(n-1,a,c,b);
        std::cout<<"Move from disk"<<"  "<<a<<"  "<<"to"<<"  "<<c<<"  "<<"\n";
        hanoi(n-1,b,a,c);
    }

}

int main( )
{
        long int num;
        std::cout<<"";
        std::cin>>num;
artificial_string a = artificial_string("a");
artificial_string b = artificial_string("b");
artificial_string c = artificial_string("c");
hanoi(num,a,b,c);
 
return 0;
}

