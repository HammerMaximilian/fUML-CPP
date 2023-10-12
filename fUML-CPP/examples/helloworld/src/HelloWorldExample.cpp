
#include "HelloWorldExampleEnvironment.h"

#include <iostream>
using namespace std;

int main() {

	examples::HelloWorldExample::HelloWorldExampleEnvironment::Instance()->execute("main");

	return 0;
}
