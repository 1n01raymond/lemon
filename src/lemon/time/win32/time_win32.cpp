#include "time.h"

#include <Windows.h>

namespace lemon{
	namespace time{
		
		/* TODO : std::chrono�� ��ü */
		float now(){
			return GetTickCount() / 1000.0f;
		}
	};
};