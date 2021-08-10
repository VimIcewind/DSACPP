#include <iostream>

using namespace std;

// 显示int数组的所有元素 : 1 <= n
void showintarr(int ia[], int n)
{
	if (n >= 1) {
		for (int i = 0; i < n; ++i) {
			cout << (i == 0 ? "{" : "") << ia[i] << (i < n - 1 ? ", " : "}\n" );
		}
	} else {
		cout << "Error! n >= 1 is needed!";
	}
}


// 起泡排序算法 (版本1A) : 0 <= n
void bubblesort1A(int A[], int n)
{
	int *ia = A;
	int num = n;
	bool sorted = false;  // 整体排序标志，首先假定尚未排序
	while (!sorted) {  // 在尚未确认已全局排序之前，逐趟进行扫描交换
		sorted = true;  // 假定已经排序
		for (int i = 1; i < n; i++) {  // 自左向右逐对检查当前范围A[0, n)内的各相邻元素
			if (A[i - 1] > A[i]) {  // 一旦A[i - 1]与A[i]逆序，则
				swap(A[i - 1], A[i]);  // 交换之，并
				sorted = false;  // 因整体排序不能保证，需要清除排序标志
			}
			showintarr(ia, num);
		}
		n--;  // 至此末元素必然就位，故可以缩短待排序序列的有效长度
	}
}  // 借助布尔型标志位sorted, 可及时提前退出, 而不致总是蛮力地做n - 1趟扫描交换

int main()
{
	int ia[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	cout << "Before bubblesort1A(), ia[10]:\n";
	showintarr(ia, 10);

	bubblesort1A(ia, 10);

	cout << "After  bubblesort1A(), ia[10]:\n";
	showintarr(ia, 10);

	return 0;
}
