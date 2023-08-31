#include <iostream>
#include <examples/helloworld/HelloWorldExample.h>
using namespace std;

int main() {

	std::cout<<__PRETTY_FUNCTION__<<"	Starting..."<<std::endl;
	examples::HelloWorldExample::HelloWorldExample::Instance()->execute();
	std::cout<<__PRETTY_FUNCTION__<<"	Done..."<<std::endl;

	return 0;
}
