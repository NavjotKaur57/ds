#include<iostream>
using namespace std;
class binary{
	public:
	int n,a[100],mid,lb,ub,e,c,pos;
	void enter(){
		cout<<"enter size:";
		cin>>n;
		cout<<"enter elements:";
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	}
	void sort(){
	int swap;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
			swap=a[j];
			a[j]=a[j+1];
			a[j+1]=swap;	
			}
		}
	}
	}
	void disp(){
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
	void search(){
		cout<<"enter element to search";
		cin>>e;
		ub=n-1;
		lb=0;
		if(ub%2==0){
			mid=(lb+ub)/2;
		}
		else{
			mid=(lb+ub+1)/2;
		}
			while (lb<=ub)
			{
			 if(a[mid]<e){
				lb=mid+1;
			}
			else if(a[mid]==e){
				pos=mid+1;
				cout<<"pos:"<<pos; 
				break;
			}
			else{
				ub=mid-1;
				
				}
				mid=(ub+lb)/2;
			}
			if(lb>ub){cout<<"Element not found";
			}
}
	
};
int main(){
	binary b;
	b.enter();
	b.sort();
	cout<<"ascending order:\n";
	b.disp();
	b.search();
}
