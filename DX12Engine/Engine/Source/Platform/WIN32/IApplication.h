#pragma once

#define ENTRYAPP(x) IApplication* EntryApplication() { return new x; }

class ENGINE_API IApplication
{
public:
	IApplication();

	virtual ~IApplication() {};

public:
	virtual VOID Initialze() = 0;

	virtual VOID Update() = 0;
};