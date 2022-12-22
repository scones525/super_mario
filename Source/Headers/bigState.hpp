
#include "MarioState.hpp"

class Mario;
class bigState : public MarioState{
    public:
        bigState();
        virtual ~bigState();
        virtual void  bigTosmall(Mario *mario);

};