#pragma once

namespace lemon{
	namespace interface{

		class handle{
		public:

			virtual unsigned int get_id() const =0;
			virtual void join() const =0;
		};
	};
};