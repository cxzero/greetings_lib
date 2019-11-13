#include <stdio.h>
#include <string.h>
#include "greetings.h"
void get_greeting(char * buffer){
	char greeting[] = "Hello from the greetings lib!\n";
	strcpy(buffer, greeting);
	return;
}
