#include <examples/helloworld/HelloWorldExampleEnvironment.h>
#include <iostream>
using namespace std;

int main() {

	std::cout<<__PRETTY_FUNCTION__<<"	Starting..."<<std::endl;
	examples::HelloWorldExample::HelloWorldExampleEnvironment::Instance()->execute();
	std::cout<<__PRETTY_FUNCTION__<<"	Done..."<<std::endl;

	return 0;
}
