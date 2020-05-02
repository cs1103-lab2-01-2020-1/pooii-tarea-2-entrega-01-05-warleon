#pragma once

template <class T, unsigned int cap>
class Stack{
	T* data = new T[cap];
	unsigned int size_=0;

public:
	Stack();
	~Stack();

	void push(T);
	void pop();
	T top();
	
	unsigned int size();

	void resize(unsigned int);
};
