#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////Ĭ�ϲ���
////���������ݾ��ô���ģ���û�о���Ĭ�ϵ�
//int func(int a, int b, int c)
//{
//	return a + b + c;
//}
////ע������
////1.��ĳ��λ������Ĭ�ϲ�������ô�����Ҷ�������Ĭ��ֵ
////2.��������������Ĭ�ϲ������Ǻ���ʵ�־Ͳ�����Ĭ�ϲ���
//int func2(int a=10, int b=10);
//
//int func2(int a=20, int b=20)//������!!!!
//{
//	return a + b;
//}
//int main()
//{
//	cout << func(10, 20, 30) << endl;
//	system("pause");
//	return 0;
//}


////ռλ����,Ҳ������Ĭ�ϲ���
////����ֵ���� ���������������ͣ�{}
//void func(int a,int)
//{
//	cout << "this is func " << endl;
//}
//int main()
//{
//
//	func(10,10);
//	system("pause");
//	return 0;
//}

////��������
////�����ú�������ͬ����߸�����
//
////����������������
////1.ͬһ����������
////2.����������ͬ
////3.�����������Ͳ�ͬ�����˳��ͬ
//void func()
//{
//	cout << "func�ĵ���" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)�ĵ���" << endl;
//}
////��������ֵ������Ϊ�������ص�����
//int main()
//{
//	func();
//	func(10);
//	func(10, 3.14);
//	system("pause");
//	return 0;
//}


//��������ע������
//1.������Ϊ���ص�����
void func(int &a)//int &a
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a)//const int &a=10;
{
	cout << "func(const int& a)����" << endl;
}

//2.������������Ĭ�ϲ���
void func2(int a,int b =10)
{
	cout << "func2(int a,int b)" << endl;
}

void func2(int a)
{
	cout << "func2(int a)" << endl;
}



int main()
{
	//int a = 10;
	//func(a);
	//func(10);
	//func2(10);//��������������Ĭ�ϲ�������ֶ����ԣ����������������
	func2(10, 20);
	system("pause");
	return 0;
}