


#include "a.h"	




#include <iostream>		
#include <Windows.h>
using namespace std;

//void __stdcall Test(int a, int b, int c)
//{
//	printf("%d %d %d", a, b, c);
//}


// default 호출규약
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

	printf("123456789"); // 제대로 return 값이 없어서 printf의 리턴값(문자열 크기) 가 eax로 리턴이 되버림.....


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

	Sleep(1000);	// stdcall임! 어셈블리어 확인해볼것. 호출부(메인함수)에 인자 정리하는 어셈블리어가 없음!

	Test(1,2,3);
	
	//Test(F1(), F1(), F1());

	int x = Test3();

	printf("%d", x);

	return 0;
}