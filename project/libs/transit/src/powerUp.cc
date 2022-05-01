#define _USE_MATH_DEFINES
#include "powerUp.h"
#include "drone.h"
#include "Beeline.h"
#include "AstarStrategy.h"
#include "DijkstraStrategy.h"
#include "DfsStrategy.h"
#include "SpinDecorator.h"
#include <cmath>
#include <limits>

PowerUp::PowerUp(JsonObject obj) : details(obj) {
    JsonArray pos(obj["position"]);
    position = {pos[0], pos[1], pos[2]};

    // JsonArray dir(obj["direction"]);
    // direction = {dir[0], dir[1], dir[2]};
    //
    // speed = obj["speed"];

    available = true;

    collider = new SphereCollider(obj["name"], pos[0], pos[1], pos[2], 20.0);
}

PowerUp::~PowerUp() {
    // Delete dynamically allocated variables
}
