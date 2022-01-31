#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: oven
//  action 1: the oven heats food
oven.heats();
//  action 2: the oven cooks
oven.cooks();
//  action 3: the oven burns
oven.burnsFood();
//  2)
//  Noun: boat
//  action 1: the boat floats
boat.floats();
//  action 2: the boat travels
boat.travel();
//  action 3: the boat sails
boat.sails();
//  3) 
//  Noun: plant
//  action 1: grows
plant.grow();
//  action 2: the plant breathes
plant.breathes();
//  action 3: the plant lives
plant.lives();
//  4)
//  Noun: ocean
//  action 1: the ocean flows
ocean.flow();
//  action 2: supports life
ocean.supportLife();
//  action 3: absorbs carbon
ocean.absorbs();
//  5) 
//  Noun: castle
//  action 1: the castle protects
castle.protects();
//  action 2: the castle provides shelter
castle.shelteres();
//  action 3: the castle hides people
castle.hides();
//  6)
//  Noun: drink
//  action 1: the drink provides nourishment
drink.nourishes();
//  action 2: the drink hydrates
drink.hydrates();
//  action 3: the drinks tastes good
drink.tastesGood();
//  7)
//  Noun: socks
//  action 1: socks maintain body temperature
socks.maintainHeat();
//  action 2: provide warmth
socks.provideWarmth();
//  action 3: socks protect your skin
socks.protect();
//  8)
//  Noun: the president
//  action 1: the president teaches people
thePresident.teaches();
//  action 2: the president controls the law
thePresident.controlsLaw();
//  action 3: the president plays football
thePresident.playsFootball();
//  9)
//  Noun: boris
//  action 1: lies
boris.lies();
//  action 2: boris makes rules
boris.makesRules();
//  action 3: boris dissapoints
boris.dissapoints();
//  10)
//  Noun: camera
//  action 1: the camera catptures light
camera.captures();
//  action 2: the camera clicks loudly
camera.clicksLoudly();
//  action 3: the camera processes
camera.processes();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
