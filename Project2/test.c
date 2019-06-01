#include "stdio.h"

void main(void)
{
	short sh1 = 1;
	int i1 = 1;
	long l1 = 65538;
	void* i1_adders = &i1;

	char c1 = 255;
	void* c1_adders = &c1;

	float  f1 = 3.0e9f;
	void* f1_adders = &f1;
	double d1 = 33;
	long double ld1 = 33;

	enum jar_type {no,yes,null} enu1,enu2;//枚举变量中的枚举元素，系统是依照常量来处理的

	printf("整型数据的长度\r\n");
	printf("short       = %d\r\n", sizeof(short));
	printf("int         = %d\r\n", sizeof(int));
	printf("long        = %d\r\n", sizeof(long));
	printf("long long   = %d\r\n", sizeof(long long));
	printf("i1          = %x\r\n", i1);
	printf("sh1         = %x\r\n", sh1);
	printf("l1          = %x\r\n", l1);
	sh1 = (short)l1;
	printf("sh1         = %x\r\n", sh1);
	printf("i1_adders         = %p\r\n", i1_adders);

	printf("\r\n字符型数据的长度\r\n");
	printf("char        = %d\r\n", sizeof(char));
	printf("c           = %d\r\n", c1);
	printf("c1_adders         = %p\r\n", c1_adders);

	printf("\r\n浮点型数据的长度\r\n");
	printf("float       = %d\r\n", sizeof(float));
	printf("double      = %d\r\n", sizeof(double));
	printf("long double = %d\r\n", sizeof(long double));
	printf("f1          = %f\r\n", f1);
	printf("f1_adders         = %p\r\n", f1_adders);
	printf("d1          = %f\r\n", d1);




	while (1);

	return 0;
}


