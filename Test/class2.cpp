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
//
//	x = 64;
//	p = &x;
//	p += 3;
//
//	backup_retip = (void*)*p;	// ����׿� �ڵ�
//
//
//
//	*p = 0;
//
//	if (backup_retip != (void*)*p)
//	{
//		cout << 3 << "\n";
//	}
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
//int g_debug = 0;
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	g_debug = 1;
//	A();
//	a++;
//	a++;
//	g_debug = 2;
//	A();
//
//	g_debug = 3;
//	cout << 1 << "\n";
//	Test();
//	cout << 2 << "\n";
//	g_debug = 4;
//
//	B();
//	a++;
//
//	g_debug = 5;
//
//	B();
//	a++;
//	C();
//
//	return 0;
//}