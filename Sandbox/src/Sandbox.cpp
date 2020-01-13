#include "Hazel.h"

class Sandbox : public Hazel::Aplication 
{
public:

	Sandbox() 
	{

	}
	~Sandbox() 
	{

	}
		
};

Hazel::Aplication* Hazel::CreateAplication() 
{
	return new Sandbox();
}
