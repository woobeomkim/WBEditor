#include "wbGameObject.h"

wb::GameObject::GameObject()
{
}

wb::GameObject::~GameObject()
{
}

void wb::GameObject::Update()
{
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		mX -= 0.01f;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		mX += 0.01f;
	}
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		mY -= 0.01f;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		mY += 0.01f;
	}
}

void wb::GameObject::LateUpdate()
{
}

void wb::GameObject::Render(HDC hdc)
{

	Rectangle(hdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);

	// TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...

}
