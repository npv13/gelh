#include "Application.h"

#include <stdio.h>

namespace Gelh {
	Application::Application() = default;

	Application::~Application() = default;
	void Application::Run()
	{
		printf("Sandbox Application Runs");
		while (true);
	}
}