#include<iostream>
#include<vector>
#include<string>
using namespace std;

//int resve(int n) {
//	vector<int> v;
//	while (n>0) {
//		v.push_back(n % 10);
//		n /= 10;
//	}
//	int sum = 0;
//	for (int i = 0; i<v.size(); i++) {
//		sum += v[i]*pow(10, v.size()-1-i);
//	}
//	return sum;
//}
//
//string five(int n) {
//	string s;
//	while (n) {
//		s.insert(s.begin(), n % 5 + '0');
//		n /= 5;
//	}
//	return s;
//}
//
//int main() {
//	int n;
//	cin >> n;	
//	int a = resve(n);
//	string s = five(a);
//	cout << s << endl;
//	return 0;
//}


//class A {
//public:
//	A() {
//		cout << 1 << endl;
//	}
//	~A() {
//		cout << 2 << endl;
//	}
//};
//int main() {
//	A *a = new A[5];
//	delete a;
//	return 0;
//
//}

//int main() {
//
//	int arr[10] = { 8,5,7,9,4,1,3,2,6,0 };
//	my_insertsort(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}


//²åÈëÅÅÐò
//void my_insertsort(int arr[], int size) {
//	if (size < 2 || arr == NULL) return;
//	int pre = 0;
//	int key = 0;
//	for (int i = 1; i < size; ++i) {
//	    key = arr[i];
//		pre = i - 1;
//		while (pre >= 0 && arr[pre] >key) {
//			arr[pre + 1] = arr[pre];
//			pre--;
//		}
//		arr[pre + 1] = key;
//	}
//}

//int main() {
//
//	int arr[10] = { 8,5,7,9,4,1,3,2,6,0 };
//	my_insertsort(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}


//Ñ¡ÔñÅÅÐò
//void my_selectsort(int arr[],int size) {
//	for (int i = 0; i < size-1; ++i) {
//		int min = i;
//		for (int j = i+1; j < size; ++j) {
//			if (arr[j] < arr[min]) {
//				min = j;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	return;
//}

//int main() {
//
//	int arr[10] = { 8,5,7,9,4,1,3,2,6,0 };
//	my_selectsort(arr, sizeof(arr)/sizeof(arr[0]));
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//¿ìÅÅ
//void my_sort(int *arr,int  low, int high) {
//	if (low >= high) return;
//	int i = low;
//	int j = high+1;
//	int key = arr[low];
//	while (low < high) {
//		while (arr[++i] < key) {
//			if (i == high)
//				break;
//		}
//		while (arr[--j] > key) {
//			if (j == low)
//				break;
//		}
//		if (i >= j) break;
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//	int tmp = arr[low];
//	arr[low] = arr[j];
//	arr[j] = tmp;
//	my_sort(arr, low, j - 1);
//	my_sort(arr, j + 1, high);
//}
//
//int main() {
//
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	my_sort(arr,0,9);
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//void quicksort(int* arr, int first, int last)
//{
//	if (first >= last)
//		return;
//	int low = first;
//	int high = last;
//	int tmp = arr[first];
//	
//	while (low < high)
//	{
//		while (arr[high] > tmp&&low < high)
//		{
//			high--;
//		}
//		if (arr[high] < arr[low])
//		{
//			arr[low] = arr[high];
//		}
//		while (arr[low] < tmp&& low < high)
//		{
//			low++;
//		}
//		if (arr[low] > arr[high])
//		{
//			arr[high] = arr[low];
//		}
//	}
//	arr[low] = tmp;
//	quicksort(arr, first, low - 1);
//	quicksort(arr, low + 1, last);
//}


//void quicksort(int *arr,int first,int last) {
//	if (first>=last)
//		return;
//	int low = first;
//	int high = last;
//	int tmp = arr[first];
//	while (low < high) {
//		while (arr[high] > tmp&&low < high)
//			high--;
//		if (arr[high] < arr[low])
//			arr[low] = arr[high];
//		while (arr[low] < tmp&&low < high)
//			low++;
//		if (arr[low] > arr[high])
//			arr[high] = arr[low];
//	}
//	arr[low] = tmp;
//	quicksort(arr, first, low - 1);
//	quicksort(arr, low + 1, last);
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	quicksort(arr, 0, 9);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//	return 0;
//}