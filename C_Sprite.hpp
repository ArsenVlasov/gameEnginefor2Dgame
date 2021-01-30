#ifndef C_Sprite_hpp
#define C_Sprite_hpp

#include "Component.hpp"
#include "C_Transform.hpp"
#include "ResourceAllocator.hpp"
class C_Sprite : public Component
{
public:
    C_Sprite(Object* owner);
    
    void Load(const std::string& filePath);
    
    void LateUpdate(float deltaTime) override;
    void Draw(Window& window) override;
	void Load(int id);

	void SetTextureAllocator(ResourceAllocator<sf::Texture>* allocator); // 1

private:
	ResourceAllocator<sf::Texture>* allocator;
    //sf::Texture texture;
    sf::Sprite sprite;
};

#endif /* C_Sprite_hpp */
