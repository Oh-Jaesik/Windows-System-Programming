//#include <iostream>	
//using namespace std;
//
//void* backup_retip; // void �����ʹ� ������ ������ �Ұ���, �ּ� ���常�� ����
//int g = 0;
//
//void Test()
//{
//	int x = 0;
//	int* p = nullptr;
//
//	//backup_retip = (void*)*p;	// ����׿� �ڵ�
//
//	x = 64;
//	p = &x;
//	p += 3;
//
//	//if (backup_retip != (void*)*p)
//	//{
//	//}
//	
//	*p = 0;
//		 
//	//x = 64;
//	//p = &x;
//	//p += 2;
//
//	//*p = *p + 3;
//}
//
//void A()
//{
//
//}
//
//void B()
//{
//
//}
//
//void C()
//{
//	
//}
//int g_debug = 10;
//
//int main()
// {
//	int a = 0;
//	int b = 0;
//	g_debug = 1;
//	A();
//	a++;
//	a++;
//	//g_debug = 2;
//	A();
//
//	//g_debug = 3;
//
//	Test();
//	
//	//g_debug = 4;
//
//	B();
//	a++;
//	
//	//g_debug = 5;
//
//	B();
//	a++;
//	C();
//
//	return 0;
//}