#ifndef DATA_MAXIM_H
#define DATA_MAXIM_H


#include <vector>
#include <string.h>

#include <data/data.h>
#include <basic/instance.h>
#include <math/mathvector.h>

using namespace MathCore::AlgebraCore::VectorCore;

namespace MachineLearning
{
	class DataMaxim : public Data
	{
		public:

			DataMaxim(std::vector<std::string> _categories, MathVector<double>& _features);
			DataMaxim();

			void parseFrom(std::string data, int feature_count);
	};
}

#endif
