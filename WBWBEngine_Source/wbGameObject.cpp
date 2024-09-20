#include "wbGameObject.h"
#include "wbInput.h"

wb::GameObject::GameObject()
{
}

wb::GameObject::~GameObject()
{
}

void wb::GameObject::Update()
{
	if (Input::GetKey(eKeyCode::A))
	{
		mX -= 0.01f;
	}
	if (Input::GetKey(eKeyCode::D))
	{
		mX += 0.01f;
	}
	if (Input::GetKey(eKeyCode::W))
	{
		mY -= 0.01f;
	}
	if (Input::GetKey(eKeyCode::S))
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

	// TODO: ���⿡ hdc�� ����ϴ� �׸��� �ڵ带 �߰��մϴ�...

}
