#include <iostream>

int main(){
	int fib_seq[3]={1,1,0};
	int total;
	while(fib_seq[2]<4000000){
		fib_seq[2]=fib_seq[1]+fib_seq[0];
		fib_seq[0]=fib_seq[1];
		fib_seq[1]=fib_seq[2];
		if(fib_seq[2]%2==0){
			total+=fib_seq[2];
			}
		}			
	std::cout<< " Total is: " << total<< std::endl;
	return 0;		

}
		





