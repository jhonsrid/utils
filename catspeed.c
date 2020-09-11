#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ch, baudrate;
	if (argc < 2)
	{
		printf("Usage: catspeed 300 | 600 | 1200 | 2400 etc < file\n");
		return 0;
	}

	baudrate = atoi(argv[1]);

	while ((ch = getc(stdin)) != EOF)
	{
		putchar(ch);
		fflush(NULL);
		// ie divide 1000000 (1 seconds in usec) * 10 (bytes to bits including latency) / baudrate 
		usleep((1000000 * 10) / baudrate); 
	}

	return 0;
}

