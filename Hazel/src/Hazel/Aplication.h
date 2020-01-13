#pragma once
#include "Core.h"

namespace Hazel
{
	class HAZLE_API Aplication
	{
	public:
		Aplication();
		virtual ~Aplication();

		void Run();

	};

	//to be defined in client
	Aplication* CreateAplication();
}
