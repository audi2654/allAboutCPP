#include<iostream>

int main(){

	int a(12), b(4), c(20), d(5);    //decalration + definition + initialization

	std::cout<<"Value of a+c: "<<a+c<<std::endl; 	//32
	std::cout<<"Value of c-b: "<<c-b<<std::endl;	//16
	std::cout<<"Value of a/b: "<<a/b<<std::endl; 	//3
	std::cout<<"Value of b*d: "<<b*d<<std::endl;	//20

	return 0;
}
