#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void LOG(int num, bool to_hex);
int main()
{
	char msg[60];
	int num = 1337;
	
	puts("[@] before overwrite:");
	LOG(num, false);
	
	gets(msg);
	
	if(num == 1337)
	{
		puts("Good Bye!\n");
		exit(1);
	}
	
	puts("\n[@] after overwrite:"); 
	LOG(num, true);
}

void LOG(int num, bool to_hex)
{
	/**
	* 	* تقوم الدالة فقط بطباعة قيمه المتغير و عنوانه فالذاكره
	*	
	*	@Args:
	*		num 	 : المتغير المراد طبعه قيمتة و عنوانة بالذاكره
	*		to_hex = : طباعه القيمه بنظام العد السداسي عشر
	*
	*	::void
	**/
	if (to_hex)
	{
		printf("num value   = %x\n", num);
		printf("num address = %p\n", &num);
	}
	else
	{
		printf("num value   = %d\n", num);
		printf("num address = %p\n", &num);
	}
};