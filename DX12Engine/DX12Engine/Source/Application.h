#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication
{
public:
	Application();

	~Application();

public:
	VOID Initialze();

	VOID Update();
};

IApplication* EntryApplication();