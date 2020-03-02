// Method of Bisection2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#define WUCHA 0.0005//误差
double hanshu(double x) {//函数
	return x * x * x + x * x * 4.0 - 10.0;
}

int main()
{
	double a = 1;
	double b = 2;
	double mid1=(a+b)/2;
	double mid2=100000;//用来记录前一个mid的值
	int count = 0;
	while (abs(mid1 - mid2) > WUCHA) {
		if (hanshu(mid1) > 0.0) {
			mid2 = mid1;
			b = mid1;
			mid1 = (mid1 + a) / 2.0;
		}
		else {
			mid2 = mid1;
			a = mid1;
			mid1 = (mid1 + b) / 2.0;
		}
		count++;
	}
	cout << "结果:"<<mid2 << endl;
	cout << "运算次数:" << count;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
