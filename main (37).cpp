#include<iostream>
using namespace std;

int main() {
	long num;
	cin>> num;
	long tem=num;             // decimal to binary
	long bin = 0;
	long pv = 1;
	while(tem>0){
	    //int pv = 1;
	    long rem = tem%2;
	    tem = tem/2;
	    bin = bin+rem*pv;
	    //tem = tem/10;
	    pv= pv*10;
	    
	}
	cout<< bin;
}
	