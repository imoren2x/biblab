/**
 *
 A simple C++ Finite State Machine: http://www.bigfatalien.com/?p=125

Getting Started:

To setup the FSM:

    At the top of your C++ source: #include <FSM.h>
    Create a new state machine: FSM *myFSM = new FSM();
    Create a bunch of FSMState sub-classes (your states).
    Add each states to your FSM like this: myFSM::AddState();

Once the FSM is setup, just call myFSM::Update() to keep the machine running!

NOTE: One trick here, I’m using the Boost shared pointer implimention to store the states. This is NOT a part of the C++ standard, but seems to be ubiquitous in it’s adoption and usage in the industry. In order to use it, you will have to download and include these libraries (not a difficult task). Hopefully this inclusion doesn’t disqualify this code as being 'simple'.
 *
 */