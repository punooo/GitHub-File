#include <stdio.h>

int main(void)
{
	char ch = 'B';

	switch (ch)
	{
		case 'a':
		case 'A':
			Printf("이 학생의 학점은 A입니다.\n")
			break;
		case 'b':
		case 'B':
			printf("이 학생의 학점은 B입니다.\n")
			break;
		case 'c':
		case 'C':
			printf("이 학생의 학점은 C입니다.\n")
			break;
		case 'd':
		case 'D':
			printf("이 학생의 학점은 D입니다.\n")
			break;
		case 'f':
		case 'F':
			printf("이 학생의 학점은 F입니다\n")
			break;
	}
	return 0;
}
