


#include "a.h"	




#include <iostream>		
#include <Windows.h>
using namespace std;

//void __stdcall Test(int a, int b, int c)
//{
//	printf("%d %d %d", a, b, c);
//}


// default ȣ��Ծ�
void __cdecl Test(int a, int b, int c)
{
	printf("%d %d %d", a, b, c);
}

int Test3()
{
	int a = 0;
	a++;
	
	if (a == 2)
		return a;

	printf("123456789"); // ����� return ���� ��� printf�� ���ϰ�(���ڿ� ũ��) �� eax�� ������ �ǹ���.....


	//return a;
}

int F1()
{
	static int a = 0;
	a++;
	return a;
}

int main()
{
	int a, b;
	a = 1;
	b = 2;

	Sleep(1000);	// stdcall��! ������� Ȯ���غ���. ȣ���(�����Լ�)�� ���� �����ϴ� ������ ����!

	Test(1,2,3);
	
	//Test(F1(), F1(), F1());

	int x = Test3();

	printf("%d", x);

	return 0;
}