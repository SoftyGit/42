#include <unistd.h>
int main()
{
	int a= '��';
	write(1, &a, 8);
}