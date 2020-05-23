#include<iostream>
#include<set>
using namespace std;

void test_set() {
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	set<int> s(arr, arr + sizeof(arr) / sizeof(arr[0]));

}

int main() {
	test_set();


	return 0;
}