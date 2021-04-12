#include "score.h"

void evaluation(int s[], int m[]) {
	int i;
	for (i = 0; i < MAX && s[i] != -1; i++) {
		if (s[i] < 30) m[i] = 0;
		else if (s[i] < 45) m[i] = 1;
		else if (s[i] < 60) m[i] = 2;
		else if (s[i] < 75) m[i] = 3;
		else if (s[i] < 90) m[i] = 4;
		else if (s[i] <= 100) m[i] = 5;
		else printf("Invalid score!\n");
	}
	printf("%d scores evaluated.\n", i);
	m[i] = -1;
	/*for (i = 0; i < MAX && m[i] != -1; i++) {
		printf("marks %d: %d\n", i+1, m[i]);
	}*/
}