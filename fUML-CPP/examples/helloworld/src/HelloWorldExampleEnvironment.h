/*
 * HelloWorldExample.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef EXAMPLES_HELLOWORLD_OPAQUEBEHAVIOREXECUTIONS_HELLOWORLDEXAMPLE_H_
#define EXAMPLES_HELLOWORLD_OPAQUEBEHAVIOREXECUTIONS_HELLOWORLDEXAMPLE_H_

#include <utils/environment/Environment.h>

namespace examples::HelloWorldExample
{
	class HelloWorldExampleEnvironment : public fuml::environment::Environment
	{
		public:
			virtual ~HelloWorldExampleEnvironment() = default;
			static const std::shared_ptr<HelloWorldExampleEnvironment>& Instance();

			virtual void execute(std::string) override;

		private:
			HelloWorldExampleEnvironment() = default;
	};
}

#endif /* EXAMPLES_HELLOWORLD_OPAQUEBEHAVIOREXECUTIONS_HELLOWORLDEXAMPLE_H_ */
