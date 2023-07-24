#include<stdio.h>
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...);

int main (void)
{
	int n;
	n = sum(4, 5);
	return(0);
}
int sum_them_all(const unsigned int n, ...)
{
	 va_list sumof;
	 va_start(sumof, n);
	 int results;
	 results = 0;
	 results = results + va_arg(sumof, int);
	 return(results);
}

