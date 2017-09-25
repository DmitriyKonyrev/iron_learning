#ifndef DATA_STORAGE_MAXIMUS_H
#define DATA_STORAGE_MAXIMUS_H


#include <data/data_storage.h>

#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <iostream>

#include <data/data.h>
#include <basic/pool.h>

namespace MachineLearning
{
	class DataStorageMaximus : public DataStorage
	{

		public:

			DataStorageMaximus(std::vector<Data>& _datas);
			DataStorageMaximus(std::string fileName);

			void parseFromFile(std::string fileName);
	};
}

#endif
