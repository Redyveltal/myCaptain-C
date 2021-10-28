#include<stdio.h>
#include<conio.h>

main()
{
	FILE *fp;
	char ch;
	int i=0, pos;
	
	//Opening the file 
	fp = fopen("testfile.txt", "r");
	
	//Moving to end of file
	fseek(fp, 0, SEEK_END);
	pos = ftell(fp);
	
	//Printing each character in reverse order
	while(i<pos)
	{
		i++;
		fseek(fp, -i, SEEK_END);
		ch = getc(fp);
	    printf("%c", ch);
	}
	
	//Closes the file
	fclose(fp);
	
	return 0;
}
