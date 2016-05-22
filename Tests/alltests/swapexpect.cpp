#include "supporting_libs.h"

class num
{
 public: 
          
        long int a = 0;
        long int b = 0;
num(long int i,long int j)
{
             a = i;
             b = j;

}

};
class ev
{
 public: 
         
num swap(long int a,long int b)
{
            long int temp = a;
             a = b;
             b = temp;
            return num(a,b);

}
void ee()
{
            long int a;
            std::cout<<"enter?";
            std::cin>>a;
            long int b;
            std::cout<<"abc";
            std::cin>>b;
        std::cout<<swap(a,b).a<<"  "<<swap(a,b).b;

}

};
int main( )
{
ev e = ev();
e.ee();
 
return 0;
}

