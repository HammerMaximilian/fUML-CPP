/*
 * InMemoryModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_ENVIRONMENT_INMEMORYMODEL_H_
#define UTILS_ENVIRONMENT_INMEMORYMODEL_H_

#include <fuml/syntax/fwd.h>
#include <unordered_map>

namespace fuml
{
	class FumlObject;
}

namespace fuml::environment
{
	class InMemoryModel
	{
		private:
			std::unordered_map<std::string, std::shared_ptr<fuml::FumlObject>> elementRepository;

		protected:
			void addToElementRepository(std::string, const std::shared_ptr<fuml::FumlObject>&);

		public:
			virtual ~InMemoryModel() = 0;

			std::shared_ptr<fuml::FumlObject> findElementByName(std::string);
	};
}

#endif /* UTILS_ENVIRONMENT_INMEMORYMODEL_H_ */
