#include "supporting_libs.h"

int main( )
{
std::vector<int> l;
l.push_back(3);
l.push_back(4);
l.push_back(2);
l.push_back(1);long int s = 0;

for (auto &u : l){
     s = s+1;
}

for (auto &j : l){
    for(long int i=0;i<=s;i++)
    {
        if(l[i]<l[i+1])
        {
            long int a = l[i];
            l[i]=l[i+1];
            l[i+1]=a;
        }
    }
}

for (auto &u : l){
    std::cout<<u	;
}
 
return 0;
}

