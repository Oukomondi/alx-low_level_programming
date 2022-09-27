#include <stdio.h>
#include <string.h>

int main()
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	/* copy string 1 into string 3 */

	strcpy (str1, str3);
	printf("Copied str1 into str3: %s\n", str3);
}
