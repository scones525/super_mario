#ifndef MARIOSTATE_H
#define MARIOSTATE_H



#include<string>


class Mario;
class MarioState{
    public:
        MarioState(std::string name);
        virtual ~MarioState();

        virtual void smallTobig(Mario *mario);
        virtual void bigTosmall(Mario *mario);
    private:
        std::string m_name;
};

#endif