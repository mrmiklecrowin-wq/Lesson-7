#include<iostream>

int main(){

short size_short = 0;
int size_int = 0;	
long size_long = 0;
long long size_ll = 0;
float size_float = 0.0;
double size_duble = 0.0;
long double size_ld = 0.0;
bool size_bool = 0;	
	
std::cout << "short:       " << &size_short << " " <<  sizeof(size_short) << std::endl;	
std::cout << "int:         " << &size_int   << " " <<  sizeof(size_int)   << std::endl;	
std::cout << "long:        " << &size_long  << " " <<  sizeof(size_long)  << std::endl;
std::cout << "long long:   " << &size_ll    << " " <<  sizeof(size_ll)    << std::endl;
std::cout << "float:       " << &size_float << " " <<  sizeof(size_float) << std::endl;
std::cout << "duble:       " << &size_duble << " " <<  sizeof(size_duble) << std::endl;
std::cout << "long_double: " << &size_ld    << " " <<  sizeof(size_ld)    << std::endl;
std::cout << "bool:        " << &size_bool  << " " <<  sizeof(size_bool)  << std::endl;
	
return 0;	
}
