#include "supporting_libs.h"

class person
{
 public: 
             
    long int num = 0;

};
class emp: public person
{
 public: 
                  
    artificial_string name = artificial_string("");
emp(artificial_string n)
{
         name = n;

}

};
int main( )
{
    artificial_string nm("");
    std::cout<<"Enter Gender?";
    std::cin>>nm;
emp p = emp(nm);
std::cout<<p.num;
 
return 0;
}

