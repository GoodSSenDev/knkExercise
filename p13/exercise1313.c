#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main()
{
	char domain[100];
	char index_url[100];
	printf("Enter the domain: ");
	gets(domain);
	
	build_index_url(domain, index_url);
	
	printf("index_url is %s", index_url);
	
	return 0;
}

void build_index_url(const char *domain, char *index_url)
{
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");

}