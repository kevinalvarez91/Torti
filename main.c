#include "builtins.h"

int main() {
	startup_banner(); 
    
	int line_num = 0; 

	//main loop
	while(1){
		int input = getchar(); 
		if(input == '\n'){
			printf("%d\n", line_num); 
			line_num++;
		}
		else{
			continue;
		}

	}

	return 0;
}
