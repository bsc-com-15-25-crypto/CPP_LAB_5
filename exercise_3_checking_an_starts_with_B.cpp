#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//decraling and initiolizing an array
	string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
	
	for(int i = 0; i < 8; i++){
		
		//checkin if start with B using if
		if(!arr[i].empty() && arr[i][0]  =='B')
		cout<<arr[i] <<" ";
	}
	return 0;
}