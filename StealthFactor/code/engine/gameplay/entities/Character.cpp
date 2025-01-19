#include "Character.hpp"

#include <engine/gameplay/EntityContext.hpp>
#include <engine/gameplay/components/Collision.hpp>
#include <engine/graphics/GraphicsManager.hpp>
#include <engine/physics/PhysicsManager.hpp>

namespace engine
{
	namespace gameplay
	{
		namespace entities
		{
			Character::Character(EntityContext &context)
				: Entity{ context }
			{
				_collisionGeomId = std::make_shared<components::Collision>(context, 0.f, 0.f, 0.f, this);
			}

			void Character::draw()
			{
				_context.graphicsManager.draw(_shapeList, getTransform());
			}
		}
	}
}
