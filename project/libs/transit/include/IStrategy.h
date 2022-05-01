#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

#include <vector>
#include "graph.h"
#include "entity.h"

using namespace routing;

class IStrategy {
    public:
        virtual void Move(IEntity* entity, double dt) = 0;
        virtual bool IsCompleted() = 0;
        void ScaleSpeed(float scale, IEntity* entity) {
            speed = speed * scale;
            entity->SetSpeed(speed);
        }
    protected:
        // IGraph object to be used in the simulation.
        const IGraph* graph;
        float speed; //ka-chow
}; //close class 



#endif // ISTRATEGY_H_