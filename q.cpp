#include "supporting_libs.h"

class counter
{
 public: 
              
    long int count = 0;
void inc()
{
         count = count+1;

}

};
int main( )
{
counter c = counter();
c.inc();
std::cout<<c.count;
 
return 0;
}

