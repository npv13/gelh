#pragma once

// defines the main entry point of the application

#ifdef GELH_PLATFORM_WINDOWS

extern Gelh::Application* Gelh::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Gelh::CreateApplication();
	app->Run();
	delete app;
}

#else
#error G.E.L.H. only support Windows !!!
#endif