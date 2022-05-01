#ifndef POWER_UP_FACTORY_H_
#define POWER_UP_FACTORY_H_

#include "entity.h"
#include "IEntityFactory.h"
#include "powerUp.h"

#include <vector>

class PowerUpFactory : public IEntityFactory {
  public:
    virtual ~PowerUpFactory() {}
    IEntity* CreateEntity(JsonObject& entity);
};

#endif
