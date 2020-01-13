#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Aplication* Hazel::CreateAplication();

int main(int argc, char** argv)
{
	//printf("Hazle engine\n");
	auto app =  Hazel::CreateAplication();
	app->Run();
	delete app;
}
#endif 