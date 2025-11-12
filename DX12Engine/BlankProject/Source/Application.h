#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication
{
public:
	Application();

	~Application();

public:
	VOID SetupPerGameSettings();

	VOID Initialze();

	VOID Update();
};

IApplication* EntryApplication();