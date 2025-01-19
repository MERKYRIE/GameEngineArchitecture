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
			class Target : public Entity
			{
			public:
				Target(EntityContext &context);

				virtual void update() override;

				virtual void draw() override;

			private:
				graphics::ShapeList _shapeList;
				std::shared_ptr<components::Collision> _collisionGeomId;
			};
		}
	}
}
