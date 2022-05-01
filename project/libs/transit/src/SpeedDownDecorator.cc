#include "SpeedDownDecorator.h"

void SpeedDownDecorator::ScaleSpeed(IEntity* entity) {
    entity->SetSpeed(0.01 * entity->GetSpeed());
    isCompleted = true;
}

void SpeedDownDecorator::Move(IEntity* entity, double dt){
    // if (!isCompleted) {
    //   entity->ScaleSpeed(0.1);
    //   isCompleted = true;
    //   strategy->Move(entity, dt);  //continue with new speed
    // }
    strategy->Move(entity, (dt * 0.3));  //continue with new speed
}
