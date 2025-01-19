#include "Target.hpp"

#include <engine/gameplay/EntityContext.hpp>
#include <engine/gameplay/GameplayManager.hpp>
#include <engine/gameplay/components/Collision.hpp>
#include <engine/graphics/GraphicsManager.hpp>
#include <engine/physics/PhysicsManager.hpp>

namespace engine
{
	namespace gameplay
	{
		namespace entities
		{
			Target::Target(EntityContext &context)
				: Entity{ context }
			{
				_shapeList.load("target");

				_collisionGeomId = std::make_shared<components::Collision>(context, gameplay::Manager::CELL_SIZE * 0.9f, gameplay::Manager::CELL_SIZE * 0.9f, 1.f, this);
			}

			void Target::update()
			{
				auto &position = getPosition();
    _collisionGeomId->update(position.x, position.y);
			}

			void Target::draw()
			{
				_context.graphicsManager.draw(_shapeList, getTransform());
			}
		}
	}
}
