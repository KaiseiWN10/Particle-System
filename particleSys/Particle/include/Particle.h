
#ifndef PARTICLE_H
#define PARTICLE_H

#include <ngl/Vec3.h>

class Particle
{
public:
    
    Particle(float x, float y, float z);
    
    void update(float changeInTime);
    void applyForces();

    //ngl::Vec3 getPos() const;
    
private:
    
    //ngl::Vec3 pos;
    //ngl::Vec3 velocity;
    //ngl::Vec3 acc;
    //float mass;
    //float radius;
    //ngl::Vec3 press;
    //ngl::Vec3 viscosity;
    //float density;
    //float averDensity;
    //const float viscConst;
    //const k;
    //const h;
    //const t
}

#endif
