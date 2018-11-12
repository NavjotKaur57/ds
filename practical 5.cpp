#include<iostream>
using namespace std;
int n;
class stack{
	public:
		int a[20];
		int top;
		stack(){
			top=-1;
		}
		void push(int val){
			if(top>n){
				cout<<"overflow";
			}
			else{
				a[++top]=val;
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"underflow";
			}
			else{
				top=top-1;
				
			}
		}
		void disp(){
			for(int i=0;i<=top;i++){
				cout<<a[i]<<" ";
			}
		}
};
int main(){
	int x;
	cout<<"enter total elements";
	cin>>n;
	stack s1;
	for(int i=0;i<n;i++){
		cin>>x;
		s1.push(x);
	}
	s1.pop();
	s1.disp();
}
