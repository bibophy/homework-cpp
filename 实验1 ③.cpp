////题目:编写一段程序，当用户输入一个5位的数值时，程序可以将其分离成单独的数字，分离结果之间用3个空格分开
//
//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int number;
//	int a1, a2, a3, a4, a5;  //用于存放个十百千万位上的数
//	cout << "please enter the number :";
//	cin >> number;
//	
//	a1 = number % 10;    //存放个位上的数
//	a2 = (number / 10) % 10;   //存放十位上的数
//	a3 = (number / 100) % 10;  //存放百位上的数
//	a4 = (number / 1000) % 10;  //存放千位上的数
//	a5 = number / 10000;  //存放万位上的数
//	
//	printf("%d%3d%3d%3d%3d", a5, a4, a3, a2, a1);
//
//	return 0;
//}