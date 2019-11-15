#pragma once
#include<iostream>
using namespace std;
template<typename Type>
class Stack
{
public:
	Stack(size_t sz = STACK_DEFAULT_SIZE);
	~Stack();
public:
	void push(const Type &x);
	void pop();
	Type show_top()const;
	Type& get_top();
public:
	bool empty()const;
	bool full()const;
private:
	enum { STACK_DEFAULT_SIZE = 20 };
	Type *base;
	size_t capacity;
	size_t top;
};

template<typename Type>
Stack<Type>::Stack(size_t sz)
{
	capacity = sz > STACK_DEFAULT_SIZE ? sz : STACK_DEFAULT_SIZE;
	base = new Type[capacity];
	top = -1;
}

template<typename Type>
 Stack<Type>::~Stack()
{
	delete[]base;
	capacity = top = 0;
}

 template <typename Type>
 bool Stack<Type>::full()const {
	 return top == capacity;
 }

 template <typename Type>
 bool Stack<Type>::empty()const {
	 return top == 0;
 }

template <typename Type>
void Stack<Type>::push(const Type &x) {
	if (!full()) {
		base[top+1] = x;
		top++;
	}
}
template <typename Type>
void Stack<Type>::pop(){
	if (!empty()) {
		top--;
	}
}

template <typename Type>
Type  Stack<Type>::show_top()const {
	return base[top];
}

template <typename Type>
Type& Stack<Type>::get_top() {

	
}