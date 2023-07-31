#include <conio.h>
#include <iostream> 
#include <stdio.h> 
#include <stdlib.h>  
#include <cstdio> 
#include <string.h> 

using namespace std;

void main()
{
	char p[35], s[80];
	int TAB[256], i, n, j, m, b;;
	puts("input s");
	gets_s(s, 80);
	puts("input p");
	gets_s(p, 35);
	n = strlen(s);
	m = strlen(p);
	for (i = 0; i < 256; i++)
		TAB[i] = m;
	for (i = 0; i < m - 1; i++)
		TAB[p[i]] = m - 1 - i;
	for (i = m - 1; i < n;)
	{
		for (j = m - 1, b = i - (m - 1); j >= 0 && s[i] == p[j]; j--, i--);
		if (j < 0) { printf("%d ", b); break; }
		else i += TAB[s[i]];
	}
	if (i >= n) puts("not found");
	_getch();
}