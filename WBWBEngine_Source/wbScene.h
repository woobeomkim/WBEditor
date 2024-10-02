#pragma once
#include "wbEntity.h"
#include "wbGameObject.h"
#include "wbLayer.h"

namespace wb
{
	class Scene : public Entity
	{
	public:
		Scene();
		~Scene();
		
		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);
	
		virtual void OnEnter();
		virtual void OnExit();

		void AddGameObject(GameObject* gameObj,const eLayerType type);

	protected:
		std::vector<Layer*> mLayers;
	};
}
