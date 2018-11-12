#include<iostream>
using namespace std;
int insertion(int a[],int);
	int deletion(int a[],int);
	int search(int a[],int);
	int traverse(int a[],int);
int main(){
	
	int a[20],n,m;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter (1) for insertion, (2) for deletion, (3) for search , (4) for traverse";
	cin>>m;
	switch(m){
		case 1: insertion(a,n);
		break;
	
	case 2: deletion(a,n);
		break;
		case 3: search(a,n);
		break;
		case 4: traverse(a,n);
		break;
	}
}
int insertion(int a[],int n)
{
	int pos,n1;
	cout<<"enter the position to insert:";
	cin>>pos;
	cout<<"enter element:";
	cin>>n1;
	cout<<"after insertion:";
	for(int i=n;i>pos-1;i--){
		a[i]=a[i-1];
	}
	a[pos-1]=n1;
	for(int i=0;i<n+1;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
int deletion(int a[],int n){
	int d;
	cout<<"enter position of the element to be delete:";
	cin>>d;
	for(int i=0;i<d-1;i++){
		cout<<a[i]<<endl;
	}
	for(int i=d;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
int search(int a[],int n){
	int s;
	int cnt=0,pos;
	cout<<"Enter element to be searched:";
	cin>>s;
	 for(int i=0; i<n; i++)
        {
                if(a[i]==s)
                {
                        cnt=1;
                        pos=i+1;
                        break;
                }
        }
        if(cnt==0)
        {
                cout<<"\n Element Not Found..!!";
        }
        else
        {
                cout<<"\n Element "<<s<<" Found At Position "<<pos;
        }
        return 0;
}
int traverse(int a[] ,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}



