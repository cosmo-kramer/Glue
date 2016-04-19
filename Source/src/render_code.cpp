#include<vector>
#include<string>
#include<string.h>
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<ctype.h>
#include<map>
#include<stdlib.h>


#include "../Header/include/function_struct.h"
#include "../Header/include/source_code.h"


void source_code::render_code()
{
	int s=strlen(file_name);
	char *file_to_write=(char *)malloc(s+5);
	*file_to_write='\0';
	strcat(file_to_write,file_name);
	strcat(file_to_write,".cpp\0");
	

	std::ofstream cpp_file(file_to_write);

	
	std::string decl;
	decl.append("#include \"supporting_libs.h\"\n\n");

	std::vector< std::pair< std::string,function_declaration > >::iterator itr = generated_cpp_code.begin();



	/*----------------------------------------

	for(std::vector< std::pair< std::string,class_declaration > >::iterator itr=generated_cpp_classes.begin();itr!=generated_cpp_classes.end();++itr)
		{
		 	decl.append("class");
			decl.append(" ");
			decl.append(itr->second.name);		 
			decl.append("\n{\n");
			decl.append(itr->first);
			decl.append("\n}\n\n");

		}

	----------------------------*/

// For remaining functions iterate over the generated_cpp_code vec	tor
	for(std::vector< std::pair< std::string,function_declaration > >::iterator itr=generated_cpp_code.begin()+1;itr!=generated_cpp_code.end();++itr)
		{
			 decl.append(itr->second.return_type);
			 decl.append(" ");
			 decl.append(itr->second.name);
			 decl.append("(");
			 for(std::vector< string_pair >::iterator i=itr->second.args.begin();i!=itr->second.args.end();++i)
			 {
			 	decl.append(i->second);
			 	decl.append(" ");
			 	decl.append(i->first);
			 	decl.append(",");
			 }
			 if(*(decl.end()-1) == ',')
			 	*(decl.end()-1)=')';
			 else  decl.append(")");
			 
			decl.append("\n{\n");
			decl.append(itr->first);
			decl.append("\n}\n\n");

		}

			// For main function 
		    	decl.append(itr->second.return_type);
			 decl.append(" ");
			 decl.append(itr->second.name);
			 decl.append("(");
			 for(std::vector< string_pair >::iterator i=itr->second.args.begin();i!=itr->second.args.end();++i)
			 {
			 	decl.append(i->second);
			 	decl.append(" ");
			 	decl.append(i->first);
			 	decl.append(",");
			 }
			 if(*(decl.end()-1) == ',')
			 	*(decl.end()-1)=')';
			 else  decl.append(")");
			 
			decl.append("\n{\n");
			decl.append(itr->first);
			decl.append("\n}\n\n");


		cpp_file<<decl;
}