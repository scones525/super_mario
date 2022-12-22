#include "MarioState.hpp"

class smallState : public MarioState{
    public:
        smallState();
        virtual ~smallState();
        virtual void  smallTobig(Mario *mario);

};