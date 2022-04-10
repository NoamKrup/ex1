/**
 * TO DELETE before submission
 */
#include <stdlib.h>
#include <string.h>
#include <assert.h>


//
// Created by noamk on 4/10/2022.
//

char* stringDuplicator(char* s, int times){
	assert(s);
	assert(times > 0);
	const int length = strlen(s);
	char* out =(char *) malloc(length*times*sizeof(char ));
	char* start = out;
	assert(out);
	for (int i=0; i<times; i++) {
		out = out + length;
		strcpy(out,s);
	}
	return start;
}
