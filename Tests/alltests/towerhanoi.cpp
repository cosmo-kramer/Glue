#include "supporting_libs.h"

void moveDisk(artificial_string fp,artificial_string tp)
{
                std::cout<<"moving disk from"<<"  "<<fp<<"  "<<"to"<<"  "<<tp;

}

void moveTower(long int height,artificial_string fromPole,artificial_string toPole,artificial_string withPole)
{
                if(height>=1)
                {
                                moveTower(height-1,fromPole,withPole,toPole);
                                moveDisk(fromPole,toPole);
                                moveTower(height-1,withPole,toPole,fromPole);
                }

}

int main( )
{
artificial_string a = artificial_string("A");
artificial_string b = artificial_string("B");
artificial_string c = artificial_string("C");
moveTower(3,a,b,c);
 
return 0;
}

