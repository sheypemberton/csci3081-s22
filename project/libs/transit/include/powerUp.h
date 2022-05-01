#ifndef POWERUP_H_
#define POWERUP_H_

#include "entity.h"
#include "IStrategy.h"
#include "math/vector3.h"

#include <vector>

// Represents a power up in a physical system.
// Power ups do not move unlike other entities
class PowerUp : public IEntity {
public:
    // Power ups are created with a name
    PowerUp(JsonObject obj);
    // Destructor
    ~PowerUp();

    // Should we have the powerup be able to get the drones pos? So then when each power-up is 'updated', it checks if drone is close enough (using its own Vector3 pos and the drones Vector3 pos), then if drone IS close enough, we 
    // ?? ?? 

    // Gets the power up's position
    Vector3 GetPosition() const { return position; }
    Vector3 GetDirection() const {return Vector3();}
    Vector3 GetDestination() const {return Vector3();}
    JsonObject GetDetails() const { return details; }
    float GetSpeed() const { return 0.0; }
    void SetPosition(Vector3 pos_) { position = pos_; }
    bool GetAvailability() const { return true; }
    std::string GetStrategyName() const {return "no strategy, power up\n"; }

    // Removing the copy constructor and assignment operator
    // so that power ups cannot be coppied.
    PowerUp(const PowerUp& powerUp) = delete;
    PowerUp& operator=(const PowerUp& powerUp) = delete;

private:
    JsonObject details;
    Vector3 position;
    bool available;

};

#endif
