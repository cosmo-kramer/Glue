#include "supporting_libs.h"

artificial_string f(artificial_string g)
{
    artificial_string s = artificial_string("Now, ");
    return s+g.upper();

}

int main( )
{
artificial_string s("");
std::cout<<"string?";
std::cin>>s;
std::cout<<f(s);
 
return 0;
}

