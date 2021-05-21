#include <iostream>
using namespace std;

class node{
public:
	int data;
	node * next;
	// now this is constructor WITH intialization
	node(int d):data(d),next(NULL){};

};

int main(){
	node a(1);
	node b(2);
	a.next=&b;
	cout<<a.data<<endl;
	cout<<(*a.next).data<<endl;
	// the alternative way is 
	cout<<a.next->data<<endl;

	return 0;
}