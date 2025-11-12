#include "pch.h"
#include "Application.h"
#include "Platform/WIN32/WinEntry.h"

ENTRYAPP(Application)

Application::Application()
{
}

Application::~Application()
{
}

VOID Application::Initialze()
{
	MessageBox(0, L"I have Loaded Up!", 0, 0);
}

VOID Application::Update()
{
	MessageBox(0, L"Loop!", 0, 0);
}
