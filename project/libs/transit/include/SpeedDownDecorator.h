#ifndef SPEED_DOWN_DECORATOR_H_
#define SPEED_DOWN_DECORATOR_H_

#include <vector>
#include "PowerUpDecorator.h"
#include "IStrategy.h"

class SpeedDownDecorator: public PowerUpDecorator {
    public:
        SpeedDownDecorator(IStrategy *strategy_) : PowerUpDecorator(strategy_) {}
        // bool IsCompleted();
        void Move(IEntity* entity, double dt);
        void ScaleSpeed(IEntity* entity);
    protected:
        bool isCompleted = false;
}; //close class 

#endif // SPEED_DOWN_DECORATOR_H_
