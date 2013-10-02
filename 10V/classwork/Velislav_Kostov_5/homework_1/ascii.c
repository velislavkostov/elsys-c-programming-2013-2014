#include <stdio.h>

int main() {
	int counter = 0;
	for(counter; counter <= 255; ++counter) {
		char c = counter;
		printf("%d - %c\n", counter, c);
	}

return 0;
}
