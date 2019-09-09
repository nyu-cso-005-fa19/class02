#include <stdio.h>
#include <inttypes.h>

int main() {
	int x;
	char y;
	float z;

	printf("Value for unintialized int: %d\n", x);
	printf("Value for unintialized char: %c\n", y);
	printf("Value for unintialized float: %f\n", z);

	int32_t a;
	int16_t b;
	int8_t c;

	printf("Value for uninitialized int32_t: %d\n", a);
	printf("Value for uninitialized int16_t: %d\n", b);
	printf("Value for uninitialized int8_t: %d\n", c);
}
