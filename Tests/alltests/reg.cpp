#include "supporting_libs.h"

int main( )
{
std::vector<std::string> l;
l.push_back("Abhishek00");
l.push_back("Apple12");
l.push_back("Code");
l.push_back("Netherlands");
for (auto &s : l){
    if(std::regex_match(s,std::regex("[A-Z][a-z]*[0-9]+")))
    {
        std::cout<<s;
    }
}
 
return 0;
}

