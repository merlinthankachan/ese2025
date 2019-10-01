//Bubble sort with vector//
***************************

#include <iostream>
#include <vector>
using namespace std;
void bubblesort();

int arr[] = { 30, 20, 400,12,25 };
int n = sizeof(arr) / sizeof(arr[0]);
vector<int> v(arr, arr + n); // vector initialization

int main() {
cout << " Bubble sort using Vector:\n";
bubblesort();
return 0;
}

void bubblesort() // bubble sort function
{
	bool swapp = true;
	while (swapp) {
		swapp = false;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]>v[i + 1]) {
				v[i] += v[i + 1];
				v[i + 1] = v[i] - v[i + 1];
				v[i] -= v[i + 1];
				swapp = true;
			}
		}
	}
	for (int i = 1; i <=v.size(); i++) {
		cout << v[i] << " ";

	}
cout << endl;
}
