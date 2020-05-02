#include "Stack.h"

template <class T, unsigned int cap>
Stack<T,cap>::Stack(){}

template <class T, unsigned int cap>
Stack<T,cap>::~Stack(){
	delete[] data;
	data=nullptr;
}

template <class T, unsigned int cap>
void Stack<T,cap>::push(T nuevo){
	if(size_>=cap)
		resize(2*size_);

	data[size_++]=nuevo;
}
template <class T, unsigned int cap>
void Stack<T,cap>::pop(){
	if(size_>0)
		data[--size_]=T();
	return;
}

template <class T, unsigned int cap>
T Stack<T,cap>::top(){
	if(size_>0)
		return data[size_-1];
	
	return T();
}

template <class T, unsigned int cap>
void Stack<T,cap>::resize(unsigned int newcap){
	T* temp= new T[newcap];
	for(unsigned int i =0;i<size_;i++)
		temp[i]=data[i];

	delete[] data;
	data=temp;
}

template <class T, unsigned int cap>
unsigned int Stack<T,cap>::size(){return size_;}
