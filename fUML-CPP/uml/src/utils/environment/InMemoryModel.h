/*
 * InMemoryModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_ENVIRONMENT_INMEMORYMODEL_H_
#define UTILS_ENVIRONMENT_INMEMORYMODEL_H_

#include <uml/fwd.h>
#include <unordered_map>

namespace uml
{
	class UmlObject;
}

namespace uml::environment
{
	class InMemoryModel
	{
		private:
			std::unordered_map<std::string, std::shared_ptr<uml::UmlObject>> elementRepository;

		protected:
			void addToElementRepository(std::string, const std::shared_ptr<uml::UmlObject>&);

		public:
			virtual ~InMemoryModel() = 0;

			std::shared_ptr<uml::UmlObject> findElementByName(std::string);
	};
}

#endif /* UTILS_ENVIRONMENT_INMEMORYMODEL_H_ */
