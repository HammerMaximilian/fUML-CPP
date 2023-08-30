#include <iostream>
using namespace std;

#include <fuml/syntax/activities/Activity.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/loci/ExecutionFactory.h>

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	ActivityPtr myActivity(new Activity());
	myActivity->setThisActivityPtr(myActivity);
	myActivity->name = "MyFirstActivity";

	LocusPtr locus(new Locus());
	locus->setThisLocusPtr(locus);
	ExecutorPtr executor(new Executor());
	ExecutionFactoryPtr executionFactory(new ExecutionFactory());

	locus->setExecutor(executor);
	locus->setFactory(executionFactory);

	ParameterValueListPtr outputValues(new ParameterValueList());

	outputValues = executor->execute(myActivity, nullptr, ParameterValueListPtr(new ParameterValueList));

	std::cout<<"Done..."<<std::endl;

	return 0;
}
