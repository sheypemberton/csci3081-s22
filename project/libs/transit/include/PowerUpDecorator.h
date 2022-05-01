#ifndef POWER_UP_DECORATOR_H_
#define POWER_UP_DECORATOR_H_

#include <vector>
#include "IStrategy.h"

class PowerUpDecorator: public IStrategy {
    public:
        PowerUpDecorator(IStrategy *strategy_) {strategy = strategy_;}
        void Move(IEntity* entity, double dt);
        void ScaleSpeed(IEntity* entity);
        bool IsCompleted();

        // HARD-CODED POWER-UP LOCATIONS 
        Vector3 pow1 = {298.292, 253.883, -228.623};
        Vector3 pow2 = {498.292, 253.883, -228.623};
        Vector3 pow3 = {498.292, 253.883, -228.623};

    protected:
        IStrategy *strategy;
        float speed;
}; //close class 

#endif // POWER_UP_DECORATOR_H_