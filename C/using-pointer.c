#include <stdio.h>
struct my_str
{
	int a;
	float b;
} my1 = {.a = 2, .b = 3.3f};

int main(){
	struct my_str *p_my1 = &my1;
	printf("Struct value a=%i; struct value pointer b=%.1f from pointer!\n", my1.a, p_my1->b);
}
