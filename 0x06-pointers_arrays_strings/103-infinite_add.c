#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int maxLength = (len1 > len2) ? len1 : len2;
	int carry = 0;
	int sum = 0;
	int i;

	if (maxLength + 1 > size_r)
		return 0;

	for (i = 0; i < maxLength; i++) {
		int digit1 = (i < len1) ? n1[len1 - i - 1] - '0' : 0;
		int digit2 = (i < len2) ? n2[len2 - i - 1] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[maxLength - i - 1] = (sum % 10) + '0';
	}

	if (carry > 0) {
		if (maxLength + 1 > size_r)
			return 0;
		r[maxLength] = carry + '0';
		r[maxLength + 1] = '\0';
	} else {
		r[maxLength] = '\0';
	}

	return r;
}

int main() {
	char n1[] = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char n2[] = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char result[100];

	if (infinite_add(n1, n2, result, sizeof(result))) {
		printf("Result: %s\n", result);
	} else {
		printf("Result cannot be stored in the buffer.\n");
	}

	return 0;
}

