#include <stdio.h>
#include <string.h>

int main() {
	char greeting[] = "Terima Kasih";

	// sizeof usage is not reliable
	size_t greetSize = sizeof(greeting);
	
	int greetLen = strlen(greeting);

	char *pg;

	// printf("Ukuran dari '%s' adalah %lu\n", greeting, greetSize);
	printf("Panjang dari '%s' adalah %d\n", greeting, greetLen);

	for (int i = 0; i < strlen(greeting); ++i){
		printf("%d - '%x'\n", i, greeting[i]);
	}

	for (int i = 0, pg = greeting; i < sizeof(greeting); ++i, ++pg){
		printf("%d - '%c'\n", i, *pg);
	}
	return 0;
}
