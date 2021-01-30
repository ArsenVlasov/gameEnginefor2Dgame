#ifndef ObjectCollection_hpp
#define ObjectCollection_hpp

#include <memory>
#include <vector>

#include "Object.hpp"

class ObjectCollection
{
public:
	void Add(std::shared_ptr<Object> object);

	void Update(float deltaTime);
	void LateUpdate(float deltaTime);
	void Draw(Window& window);

	void ProcessNewObjects(); // 1

private:
	std::vector<std::shared_ptr<Object>> objects;
	std::vector<std::shared_ptr<Object>> newObjects; // 2
};

#endif /* ObjectCollection_hpp */