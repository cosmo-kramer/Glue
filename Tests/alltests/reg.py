import re

l = ["Abhishek00","Apple12","Code","Netherlands"] : vector<std::string>

for s in l:
	if re.search("[A-Z][a-z]*[0-9]+",s):
		print s
