#include "Collision.hpp"

#include <engine/gameplay/EntityContext.hpp>
#include <engine/physics/PhysicsManager.hpp>

namespace engine
{
    namespace gameplay
    {
        namespace components
        {
            Collision::Collision(EntityContext &context, float x, float y, float z, Entity* entity)
			         {
				            _geomId = dCreateBox(context.physicsManager.getSpaceId(), x, y, z);
                dGeomSetData(_geomId, entity);
			         }

            Collision::~Collision()
            {
                dGeomDestroy(_geomId);
            }

            void Collision::update(float x, float y)
			         {
				            dGeomSetPosition(_geomId, x, y, 0);
			         }

            std::set<dGeomID> Collision::getCollisionsWith(EntityContext &context) const
            {
                return context.physicsManager.getCollisionsWith(_geomId);
            }
        }
    }
}
