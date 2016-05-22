#include "supporting_libs.h"
#include<iostream>

using namespace std;


int main()
{

	artificial_string s = artificial_string("Happy");
	s.capitalize();
	artificial_string e = s+std::string("12345"); 
	cout<<s+"??";
	return 0;
}
