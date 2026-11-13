#include <stdio.h>
#include <stdarg.h>

void print(const char *p,...)
{
	va_list handle;
	va_start(handle, p);
	puts(p);
	while(p=va_arg(handle, char*))
	{
		puts(p);
	}
	va_end(handle);
	return;
}

int main()
{
	char *s1 = "abcd";
	char str[] = "hello";
	print(str,"Hi", NULL);
	print("aaa","bbb","ccc","ddd", NULL);
	print(s1, NULL);
	
	return 0;
}