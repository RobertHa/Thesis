#include <iostream>
#include <iomanip>
#include <cmath>
#include <base/printf.h>
#include <os/config.h>
#include <sstream>


using namespace std;


int main(){
	unsigned int n=1000;

	const Genode::Xml_node& config_node = Genode::config()->xml_node();
	config_node.sub_node("arg1").value<unsigned int>(&n);

	if(n==42){
		PINF("Can not count because 42!");

		return 0;
	}

	unsigned int sum=0;

	for(unsigned int i=0;i<n;i++){
		sum+=i;
	}


	PINF("sum up to %d is %d", n, sum);


	return 0;
}
