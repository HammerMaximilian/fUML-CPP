/*
 * HelloWorldExample.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef EXAMPLES_HELLOWORLD_OPAQUEBEHAVIOREXECUTIONS_HELLOWORLDEXAMPLE_H_
#define EXAMPLES_HELLOWORLD_OPAQUEBEHAVIOREXECUTIONS_HELLOWORLDEXAMPLE_H_

#include <examples/FumlExample.h>

namespace examples::HelloWorldExample
{
	class HelloWorldExample : public examples::FumlExample
	{
		public:
			virtual ~HelloWorldExample() = default;
			static const std::shared_ptr<HelloWorldExample>& Instance();

			virtual void execute() override;

		private:
			HelloWorldExample() = default;
	};
}

#endif /* EXAMPLES_HELLOWORLD_OPAQUEBEHAVIOREXECUTIONS_HELLOWORLDEXAMPLE_H_ */
