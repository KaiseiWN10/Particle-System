#include "Particle.h"

Particle::Particle(float x, float y, float z) : pos(x,y,z), velocity(1.0f,1.0f,1.0f), acc(1.0f,1.0f,1.0f), mass(1.0f), radius(4.0f), press(0.0f, 0.0f, 0.0f), viscosity(1.0f,1.0f,1.0f), density(0.0f), averDensity(0.0f), viscConst(1.0), k(1.0f), h(1.0f), t(1.0f) {}

void Particle::update(float changeInTime)
{
    //viscosity +=
    acc += press + viscosity + 5.3f;
    velocity += changeInTime * acc/mass;
    pos += changeInTime * velocity * acc * (changeInTime*changeInTime) * 0.5f;
}

void Particle::applyForces()
{
    acc += press + viscosity + 5.3f;
}

ngl::Vec3 Particle::getPos() const
{
    return pos;
}
