#include <stdio.h>

int main()
{
		int i;

		char char_array[5] = {'a','b','c','d','e'};
		int int_array[5] = {1,2,3,4,5};

		char *char_pointer;
		int *int_pointer;

		int_pointer = char_array;
		char_pointer = int_array;

		for(i=0; i < 5;i++)
		{
				printf("[interger pointer] points to %p,which contains the intger %c\n",int_pointer,*int_pointer);
				int_pointer += 1;
		}
		
		for(i=0; i < 5;i++)
		{
				printf("[char pointer] points to %p,which contains the char %d\n",char_pointer,*char_pointer);
				char_pointer += 1;
		}
}
