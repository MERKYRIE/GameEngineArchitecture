#pragma once

#include <set>
#include <ode/collision.h>
#include <engine/gameplay/Component.hpp>

namespace engine
{
    namespace gameplay
    {
        struct EntityContext;
        class Entity;
        
        namespace components
        {
            class Collision : public Component
            {
            public:
                Collision(EntityContext &context, float x, float y, float z, Entity* entity);
                ~Collision();

                virtual void update(float x, float y) override;
                std::set<dGeomID> getCollisionsWith(EntityContext &context) const;

            protected:
                dGeomID _geomId;
            };
        }
    }
}
