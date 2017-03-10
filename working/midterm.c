#include <stdlib.h>
#include <stdio.h>

// Adding a line to see what is happening with GIT.

int main(int argc, char** argv){
	
	int 	in1, in2, n, total = 0;
	char 	trailing[32];
	char 	oper;

	if (argc < 4) {
		printf("Call as: midterm <n1> <op> <n2>.\n<op> arithmetic operators: +, -, x, /\n<n1>, <n2> the two integers\n");
	} // end if
	
		
	// Make sure n1 is an integer
	if(sscanf(argv[1], "%d %s", &n, trailing) != 1) {
		printf("%s is not a number.\n", argv[1]);
		return -2;
	} // end if
	else {
		sscanf(argv[1], "%d", &in1);
	}

	// Make sure arg[2] is an operand
	if(sscanf(argv[2], "%c %s", &oper, trailing) != 1) {
		printf("%s is not a operand.\n", argv[2]);
		return -2;
	} // end if
	else {
		sscanf(argv[2], "%c", &oper);
	}

	// Make sure n2 is an integer
	if(sscanf(argv[3], "%d %s", &n, trailing) != 1) {
		printf("%s is not a number.\n", argv[3]);
		return -2;
	} // end if
	else {
		sscanf(argv[3], "%d", &in2);
	}

	// Do some arithmetic
	switch(oper) {
		case '+':
			total = in1 + in2;
			break;
		case '-':
			total = in1 - in2;
			break;
		case 'x':
			total = in1 * in2;
			break;
		case '/':
			total = in1 / in2;
			break;
		default:
			printf("Please enter a valid operand.\n");
			break;

	} // end switch

	printf("%d %c %d = %d\n", in1, oper, in2, total); 

	return 0;
} // end main
