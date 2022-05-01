#include "SpeedUpDecorator.h"

void SpeedUpDecorator::ScaleSpeed(IEntity* entity) {
    entity->SetSpeed(10.0 * entity->GetSpeed());
    isCompleted = true;
}

void SpeedUpDecorator::Move(IEntity* entity, double dt){
//     if (!isCompleted) {
//         entity->ScaleSpeed(10.0);
//         std::cout << "speed scaled: " << entity->GetSpeed() << std::endl;
//         isCompleted = true;
//         strategy->Move(entity, dt);  //continue with new speed
//     }
     strategy->Move(entity, (dt*2.5));  //continue with new speed

  }
