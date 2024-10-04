#pragma once
#include "..\\WBWBEngine_Source\\\wbResources.h"
#include "..\\WBWBEngine_Source\\\wbTexture.h"

namespace wb
{
	void LoadResources()
	{
		Resources::Load<wb::graphics::Texture>(L"BG", L"C:\\Users\\woobu\\source\\repos\\WBEditor\\Resources\\CloudOcean.png");
	}
}