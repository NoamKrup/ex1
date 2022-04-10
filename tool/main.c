//
// Created by noamk on 4/10/2022.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define  PRINT_STRING(a) printf("%s = %s\n", (#a), (a))
int main(int argc,char** argv) {
	// TODO input from file output to file
	// TODO check if 2 flags is posible .
	char* flag = argv[1], *source = argv[2], *target = argv[3];
	printf("hay\n");
	printf("%d\n", argc);
	PRINT_STRING(flag);
	PRINT_STRING(source);
	PRINT_STRING(target);
	return 0;
}
