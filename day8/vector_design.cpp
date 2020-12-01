#include <iostream>
using namespace std;

template<typename T>
class Vector {
	int cs;
	int ms;
	T *arr;
public:
	Vector() {
		cs = 0;
		ms = 1;
		arr = new T[ms];
	}

	void push_back(int d) {
		//array is full
		if (cs == ms) {
			T *oldArr = arr;
			arr = new T[2 * ms];
			ms = 2 * ms;
			for (int i = 0; i < cs; i++)
				arr[i] =  oldArr[i];
			//clear the memory
			delete [] oldArr;
		}
		arr[cs] = d;
		cs++;
	}

	void pop_back() {
		cs--;
	}

	T front() const {
		return arr[0];
	}

	T back() const {
		return arr[cs - 1];
	}

	bool empty() const {
		return cs == 0;
	}

	int capacity() const {
		return ms;
	}

	T at(int i) const {
		return arr[i];
	}

	int size() const {
		return cs;
	}

	//operator overloading
	T operator[](const int i) {
		return arr[i];
	}
};

void OnlineJudge() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	OnlineJudge();
	Vector<char>v;

	v.push_back('a');
	v.push_back('b');
	v.pop_back();
	v.push_back('c');
	v.push_back('d');

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	cout << "Capacity: " <<  v.capacity() << endl;
	cout << "Size: " << v.size() << endl;

	return 0;
}
