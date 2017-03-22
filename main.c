#include <stdio.h>
#include "util.h"


int main(int argc, char* argv[]){
	
	char *name= argv[1];
	printf( "tamaño: %d bytes", filesize(name));
	return 0;
}
