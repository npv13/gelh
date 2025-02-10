#include <Gelh.h>

class Sandbox : public Gelh::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Gelh::Application* Gelh::CreateApplication()
{
	return new Sandbox();
}

