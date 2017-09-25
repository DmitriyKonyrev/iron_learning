#ifndef DATA_STORAGE_H
#define DATA_STORAGE_H


#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <iostream>

#include <data/data.h>
#include <basic/pool.h>

namespace MachineLearning
{
	class DataStorage
	{
	protected:

		std::vector<Data> datas;
		std::vector<std::pair<std::string, size_t> > categories;

	public:

		DataStorage();
		DataStorage(std::vector<Data>& _datas);
		DataStorage(std::string fileName);

		virtual void parseFromFile(std::string fileName);

		Pool& toPool(std::string category, size_t& positive_count, double& blur_factor);
		Pool& toLinearPool(std::string category, size_t& positive_count, double& blur_factor);

		std::vector<std::pair<std::string, size_t> > getCategories();

		size_t categoriesCount();

	protected:

		struct predicate
		{
			bool operator()(std::pair<std::string, size_t>& first, std::pair<std::string, size_t>& second)
			{
				return first.second > second.second;
			};
		};
	};
};
  
#endif
