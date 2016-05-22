#include<iostream>
#include<string>

using namespace std;

int  main()
{

	string s = R"(#include \"supporting_libs.h\"

int main( )
{
std::cout<<1<<\"Happy\";
 
return 0;
}
)";

	cout<<s;
}