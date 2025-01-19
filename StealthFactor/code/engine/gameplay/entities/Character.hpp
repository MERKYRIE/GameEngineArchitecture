#pragma once

#include <memory>
#include <ode/collision.h>
#include <engine/graphics/ShapeList.hpp>
#include <engine/gameplay/Entity.hpp>

namespace engine
{
	namespace gameplay
	{
		namespace components
  {
   class Collision;
  }
  
  namespace entities
		{
			class Character : public Entity
			{
			public:
				Character(EntityContext &context);

				virtual void draw() override;

			protected:
				graphics::ShapeList _shapeList;
    std::shared_ptr<components::Collision> _collisionGeomId;

				bool _isWalking{ false };
			};
		}
	}
}
