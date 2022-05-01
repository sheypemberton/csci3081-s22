#include "PowerUpDecorator.h"

bool PowerUpDecorator::IsCompleted(){
    return strategy->IsCompleted();
}

void PowerUpDecorator::Move(IEntity* entity, double dt){
    strategy->Move(entity, dt);
}

void PowerUpDecorator::ScaleSpeed(IEntity* entity) {
    
}
