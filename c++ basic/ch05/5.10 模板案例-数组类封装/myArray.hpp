#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {

public:
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	// 拷贝构造
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	MyArray& operator=(const MyArray& arr) {
		// 先判断原有的堆区是否有数据，如果有先释放
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	T& operator[](int pos) {
		return this->pAddress[pos];
	}

	// 尾插
	void push_Back(const T& val) {
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	// 获取容量
	int getCapacity() {
		return this->m_Capacity;
	}

	// 获取大小
	int getSize() {
		return this->m_Size;
	}

	~MyArray() {
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
	}


private:

	T* pAddress;	// 指向堆区的数组指针
	int m_Capacity;	// 数组容量
	int m_Size;		// 数组大小

};