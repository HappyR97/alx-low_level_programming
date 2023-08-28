#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	int carry = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (j >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		int sum = digit1 + digit2 + carry;
		r[k] = (sum % 10) +'0';
		carry = sum / 10;

		i--;
		j--;
		k++;
	}
	int m, n;

	for (m = 0; n = k -1; m < n; m++; n--)
	{
		char temp = r[m];
		r[m] = r[n];
		r[n] = temp;
	}

	r[k] = '\0';

	return (r);

}
