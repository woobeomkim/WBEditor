#include "wbApplication.h"
#include "wbInput.h"

namespace wb
{
	Application::Application()
		: mHwnd(nullptr),
		mHdc(nullptr)
	{
	}

	Application::~Application()
	{
	}
	void Application::Initialize(HWND hwnd)
	{
		mHwnd = hwnd;
		mHdc = GetDC(mHwnd);

		mPlayer.SetPosition(0, 0);
		
		Input::Initailize();
	}

	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();
	}

	void Application::Update()
	{
		Input::Update();
		mPlayer.Update();
		
	}
	void Application::LateUpdate()
	{
	}
	void Application::Render()
	{
		mPlayer.Render(mHdc);

	}
}