#ifndef EMITTER_H
#define EMITTER_H

#include "Particle.h"
#include <vector>
#include <ngl/Vec3.h>

class Emitter
{
public:
    
    Particle(float x, float y);
    
    void update(float deltaTime);
    void applyForces();
    
private:
    float mass;
    float radius;
    float K;
    float H;
    float T;
    float Viscosity_Const;
    float averageDensity;
    ngl::Vec3 pos;
    ngl::Vec3 vel;
    ngl::Vec3 acc;
    ngl::Vec3 press;
    ngl::Vec3 den;
    ngl::Vec3 visc;
};

#endif
