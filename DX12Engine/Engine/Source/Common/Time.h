#pragma once

#include <string>

namespace Time
{
	std::wstring ENGINE_API GetTime(BOOL stripped = FALSE);

	std::wstring ENGINE_API GetDate(BOOL stripped = FALSE);

	std::wstring ENGINE_API GetDateTimeString(BOOL stripped = FALSE);
}

