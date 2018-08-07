#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int generate_sum(int multiple_a, int limit){
	
	int biggest_mult=0;
	int terms=0;
	limit=limit-1;
	while(true){
		if(limit % multiple_a !=0){
			limit=limit-1;
		}
		else{
			biggest_mult=limit;
			terms=biggest_mult/multiple_a;
			break;
		}
	}
	return (terms*(biggest_mult+multiple_a))/2;
	
}

int main(){

	int sum=generate_sum(3,1000)+generate_sum(5,1000)-generate_sum(15,1000);
	std::cout<< "Sum is : " << sum << std::endl;
	return 0;



}	
