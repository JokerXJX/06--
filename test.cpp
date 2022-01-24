#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////默认参数
////若传入数据就用传入的，若没有就用默认的
//int func(int a, int b, int c)
//{
//	return a + b + c;
//}
////注意事项
////1.若某个位置已有默认参数，那么从左到右都必须有默认值
////2.若函数声明已有默认参数，那函数实现就不能有默认参数
//int func2(int a=10, int b=10);
//
//int func2(int a=20, int b=20)//不可以!!!!
//{
//	return a + b;
//}
//int main()
//{
//	cout << func(10, 20, 30) << endl;
//	system("pause");
//	return 0;
//}


////占位参数,也可以有默认参数
////返回值类型 函数名（数据类型）{}
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

////函数重载
////可以让函数名相同，提高复用性
//
////函数重载满足条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同或个数顺序不同
//void func()
//{
//	cout << "func的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//}
////函数返回值不能作为函数重载的条件
//int main()
//{
//	func();
//	func(10);
//	func(10, 3.14);
//	system("pause");
//	return 0;
//}


//函数重载注意事项
//1.引用作为重载的条件
void func(int &a)//int &a
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a)//const int &a=10;
{
	cout << "func(const int& a)调用" << endl;
}

//2.函数重载碰到默认参数
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
	//func2(10);//当函数重载碰到默认参数会出现二义性，报错，尽量避免错误
	func2(10, 20);
	system("pause");
	return 0;
}