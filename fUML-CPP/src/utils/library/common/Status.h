/*
 * Status.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_COMMON_STATUS_H_
#define UTILS_LIBRARY_COMMON_STATUS_H_

#include <fuml/syntax/fwd.h>
#include <fuml/semantics/fwd.h>

namespace fuml::library::common
{
	class Status
	{
		private:
			PrimitiveTypePtr stringType = nullptr;
			PrimitiveTypePtr integerType = nullptr;

			std::string context;
			int code = 0;
			std::string description;

			static DataTypePtr statusType;

		private:
			void setPrimitiveTypes(const LocusPtr&);

		public:
			Status() = default;
			Status(const LocusPtr&, std::string, int, std::string);
			Status(const LocusPtr&, std::string);

			static const DataTypePtr& getStatusType();
			static void setStatusType(const DataTypePtr&);
			bool isNormal();
			void setStatus(std::string, int, std::string);
			std::string getContext();
			int getCode();
			std::string getDescription();
			ValuePtr getValue();
	};
}


#endif /* UTILS_LIBRARY_COMMON_STATUS_H_ */
