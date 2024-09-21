#include "wbGameObject.h"
#include "wbInput.h"
#include "wbTime.h"

wb::GameObject::GameObject()
{
}

wb::GameObject::~GameObject()
{
}

void wb::GameObject::Update()
{
	const int speed = 10000.0f;
	if (Input::GetKey(eKeyCode::A))
	{
		mX -= speed * Time::DeltaTime();
	}
	if (Input::GetKey(eKeyCode::D))
	{
		mX += speed * Time::DeltaTime();
	}
	if (Input::GetKey(eKeyCode::W))
	{
		mY -= speed * Time::DeltaTime();
	}
	if (Input::GetKey(eKeyCode::S))
	{
		mY += speed * Time::DeltaTime();
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
