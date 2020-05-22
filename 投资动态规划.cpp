// 投资动态规划.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int Arr[6][4] = {
    {0,0,0,0},
    {11,0,2,20},
    {12,5,10,21},
    {13,0,30,22},
    {14,15,32,23},
    {15,20,40,24}
};
int value = 0;
int project_count = 0;
void find_max_value(int Arrhead[6][4]) {
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    int finalx1 = 0, finalx2 = 0, finalx3 = 0, finalx4 = 0;//用finalxi表示动态规划的最优解
    int temp = 0;
    for (; x1 <= 5; x1++) {
        x2 = 0;
        for (; x1 + x2 <= 5; x2++) {
            x3 = 0;
            for (; x1 + x2 + x3 <= 5; x3++) {
                x4 = 5 - x1 - x2 - x3;
                temp = Arrhead[x1][0] + Arrhead[x2][1] + Arrhead[x3][2] + Arrhead[x4][3];
                if (temp > value) {
                        value = temp;
                        finalx1 = x1;
                        finalx2 = x2;
                        finalx3 = x3;
                        finalx4 = x4;
                }
                project_count++;
            }
        }
    }
    cout << "总方案个数是" << project_count << endl;
    cout << "最佳投资方案是" << endl;
    cout << "x1=" << finalx1 << endl;
    cout << "x2=" << finalx2 << endl;
    cout << "x3=" << finalx3 << endl;
    cout << "x4=" << finalx4 << endl;
    cout << "最佳方案总收益为" << value << "万元" << endl;
}
int main()
{
    find_max_value(Arr);
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
