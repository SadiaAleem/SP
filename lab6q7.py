string = raw_input("enter sentence: ")
l=0;
d=0;
for i in string:
	if(i.isdigit()):
		d=d+1;
	if(i.isalpha()):
		l=l+1;
print("letters ",l, "| digits ",d,);

