#include <iostream>
#include "Stack.cpp"


using namespace std;

int main(){
	Stack<int,5> miStack;
	miStack.push(1);
	miStack.push(2);
	miStack.push(3);
	miStack.push(4);
	miStack.push(5);
	miStack.push(6);

	cout<<miStack.top()<<endl;

	for(int i=miStack.size();i>=0;i--){
		cout<<miStack.top()<<", ";
		miStack.pop();
	}

	return 0;
}
