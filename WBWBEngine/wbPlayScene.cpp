#include "wbPlayScene.h"
#include "wbGameObject.h"
#include "wbPlayer.h"
#include "wbTransform.h"
#include "wbSpriteRenderer.h"
#include "wbInput.h"
#include "wbTitleScene.h"
#include "wbSceneManager.h"
#include "wbObject.h"
#include "wbTexture.h"
#include "wbResources.h"

namespace wb
{
	PlayScene::PlayScene()
	{
	}
	PlayScene::~PlayScene()
	{
	}
	void PlayScene::Initialize()
	{
		// 게임오브젝트 만들기전 리소스들 전부 Load해두면 좋다.
			bg = object::Instantiate<Player>(enums::eLayerType::BackGround, Vector2(0, 0));
			SpriteRenderer* sr
				= bg->AddComponent<SpriteRenderer>();
			
			graphics::Texture* bg = Resources::Find<graphics::Texture>(L"BG");
			sr->SetTexture(bg);
			
	}
	void PlayScene::Update()
	{
		Scene::Update();
	}
	void PlayScene::LateUpdate()
	{
		Scene::LateUpdate();

		if (Input::GetKeyDown(eKeyCode::N))
		{
			SceneManager::LoadScene(L"TitleScene");
		}
	}
	void PlayScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
		wchar_t str[50] = L"Play Scene";
		int len = wcslen(str);
		TextOut(hdc, 0, 0, str, len);
	}
	void PlayScene::OnEnter()
	{
	}
	void PlayScene::OnExit()
	{
		//Transform* tr = bg->GetComponent<Transform>();
		//tr->SetPos(Vector2(0, 0));
	}
}