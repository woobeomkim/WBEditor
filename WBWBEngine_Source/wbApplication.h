#pragma once
#include "CommonInclude.h"
#include "wbGameObject.h"

namespace wb 
{
	class Application
	{
	public:
		Application();
		~Application();

		void Initialize(HWND hwnd);
		void Run();
		
		void Update();
		void LateUpdate();
		void Render();

	private:
		HWND mHwnd;
		HDC mHdc;

		GameObject mPlayer;
	};
}
