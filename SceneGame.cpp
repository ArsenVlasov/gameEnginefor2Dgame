#include "SceneGame.hpp"

SceneGame::SceneGame(WorkingDirectory& workingDir, ResourceAllocator<sf::Texture>& textureAllocator)
	: workingDir(workingDir), textureAllocator(textureAllocator) { }

void SceneGame::OnCreate()
{
    player = std::make_shared<Object>();
    
    auto sprite = player->AddComponent<C_Sprite>();
	sprite->SetTextureAllocator(&textureAllocator);
    sprite->Load(workingDir.Get() + "bob.png");
    
    auto movement = player->AddComponent<C_KeyboardMovement>();
    movement->SetInput(&input);
}

void SceneGame::OnDestroy()
{
    
}

void SceneGame::ProcessInput()
{
    input.Update();
}

void SceneGame::Update(float deltaTime)
{
    player->Update(deltaTime);
}

void SceneGame::LateUpdate(float deltaTime)
{
    player->LateUpdate(deltaTime);
}

void SceneGame::Draw(Window& window)
{
    player->Draw(window);
}
