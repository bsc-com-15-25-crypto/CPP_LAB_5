
#include <iostream>
#include <random>

using namespace std;
int main(){
	
	random_device rd;
	mt19937 gen(rd());
	
	uniform_int_distribution<> distrib(0, 11);
	for(int i = 0; i < 1; ++i){
		
		switch (distrib(gen)){
			case 0:
				cout<<"Your subscription has expired";
				break;
			case 1:
				cout<<"your subscription will expire within a day!\nRenew now and save 20%";
				break;
				
			case 5:
			case 4:
			case 3:
			case 2:
				cout<<"Your subscription expires in "<<distrib(gen)<<" days"<<"\nRenew now and save 10%";
				break;
				
			case 10:
			case 9:
			case 8:
			case 7:
			case 6:
			
				cout<<"Your subscription will expire soon\nRenew now";
				break;
				
			default:
				cout<<"You have an active subscription";
				break;
		}
}
	return 0;
}