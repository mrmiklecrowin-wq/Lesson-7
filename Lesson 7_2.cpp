#include<iostream>

int swap(int &a,int &b)
{

int c = 0;	
c = a;
a = b;	
b = c;	

return 0;
}

int main(int argc, char** argv)
{

int a = 5, b = 8;
	
std::cout << "a = " << a << ", b = " << b << std::endl;
	
swap(a, b);
	
std::cout << "a = " << a << ", b = " << b << std::endl;
	
return 0;
}	
