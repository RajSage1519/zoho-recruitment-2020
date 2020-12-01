#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int size;
	
	cout<<"ENTER THE SIZE:\n";
	
	cin>>size;
	
	int itr1,itr2,counter=1;

	for(itr1=0;itr1<size;itr1++){
		
		for(itr2=0;itr2<size;itr2++){
			
			if(itr2>=size-1-itr1){
				
				cout<<counter<<" ";
				
				counter+=1;
			}
			else{
				
				cout<<"  ";
				
			}
		}
		cout<<"\n";
	}
  
  
return 0;
}
