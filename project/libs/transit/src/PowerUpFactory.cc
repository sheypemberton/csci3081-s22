#include "PowerUpFactory.h"

IEntity* PowerUpFactory::CreateEntity(JsonObject& entity){
  std::string type = entity["type"];
  if(type.compare("powerUp") == 0){
    PowerUp* powerUpTemp = new PowerUp(entity);
    std::cout << "PowerUp Created" << std::endl;
    return powerUpTemp;
  }
  return nullptr;
}
