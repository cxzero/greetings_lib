#include <stdio.h>
#include <string.h>
#include "greetings.h"
char greeting[] = "Hello from the greetings lib!\n";

int get_greetingSize(){
	return sizeof(greeting);
}

int get_greeting(char * buffer){
 	if (strncpy(buffer, greeting,sizeof(greeting)) != NULL) {
	 	return 0;
	}
	return -1;
}
