FILE *fp;

if (fp = fopen(filename, "r"))
{
	read characters until EOF
}

fclose(fp) ; // if fp is NULL THIS can couse undefine error

to either this

FILE *fp;

if (fp = fopen(filename, "r"))
{
	read characters until EOF
	fclose(fp) ; // if this section is not importent part. 
}

or this

FILE *fp;

if (fp = fopen(filename, "r"))
{
	read characters until EOF
	fclose(fp) ; 
} 
else
{
	fprintf(stderr, "ERROR: file can not open \n");
	exit(EXIT_FAILURE); // error occur we don't know what happen next so just turn the programe off
}
