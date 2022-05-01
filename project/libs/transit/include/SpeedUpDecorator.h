#ifndef SPEED_UP_DECORATOR_H_
#define SPEED_UP_DECORATOR_H_

#include <vector>
#include "PowerUpDecorator.h"
#include "IStrategy.h"

class SpeedUpDecorator: public PowerUpDecorator {
    public:
        SpeedUpDecorator(IStrategy *strategy_) : PowerUpDecorator(strategy_) {}
        // bool IsCompleted();
        void Move(IEntity* entity, double dt);
        void ScaleSpeed(IEntity* entity);
    protected:
        bool isCompleted = false;
}; //close class 

#endif // SPEED_UP_DECORATOR_H_
