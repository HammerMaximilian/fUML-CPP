/*
 * ExecutionQueue.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTIONQUEUE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTIONQUEUE_H_

#include <fuml/semantics/fwd.h>

namespace fuml::semantics::commonbehavior
{
	class ExecutionQueue
	{
		private:
			ExecutionListPtr queue = std::make_shared<ExecutionList>();

			using ExecutionQueuePtr = std::shared_ptr<ExecutionQueue>;
			static ExecutionQueuePtr executionQueue;

		public:
			static bool notStarted();
			static void start();
			static bool step();
			static void enqueue(const ExecutionPtr&);

		private:
			void run();
			bool runNext();
			void add(const ExecutionPtr&);
	}; // ExecutionQueue
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTIONQUEUE_H_ */
