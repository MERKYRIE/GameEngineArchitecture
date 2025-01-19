#pragma once

namespace engine
{
    namespace gameplay
    {
        class Component
        {
        public:
            virtual void update(float x, float y) = 0;
        };
    }
}
