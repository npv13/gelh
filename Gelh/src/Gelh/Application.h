#pragma once

#include "Core.h"

namespace Gelh {
	class GELH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined at Client
	Application* CreateApplication();
}
