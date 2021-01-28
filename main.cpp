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
//  Noun:       dog 
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog runs
dog.run();
//  action 3:   the dog attracts passersby
dog.attractPassersby();
//  2)
//  Noun:       chair
//  action 1:   the chair squeaks
chair.squeak();
//  action 2:   the chair makes unbearable noise
chair.makeUnberableNoise();
//  action 3:   the chair falls apart
chair.fallApart(); 
//  3)
//  Noun:       finger
//  action 1:   the finger stings
finger.sting();
//  action 2:   the finger moves
finger.move();
//  action 3:   the finger scratches his hair
finger.scratchHair();
//  4)
//  Noun:       fire
//  action 1:   the fire warms people
fire.warmPeople();
//  action 2:   the fire illuminates the ancient world
fire.illuminateAcientWorld();
//  action 3:   the fire burns out forest
fire.burnOutForest(); 
//  5)
//  Noun:       cat
//  action 1:   the cat meows
cat.meow();
//  action 2:   the cat lies down
cat.lieDown();
//  action 3:   the cat jumps out of the window
cat.jumpOutOfWindow();
//  6)
//  Noun:       flower
//  action 1:   the flower blooms
flower.bloom();
//  action 2:   the flower withers
flower.wither();
//  action 3:   the flower scents in air
flower.scentInAir();
//  7)          
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird sings
bird.sing();
//  action 3:   the bird catches insects
bird.catchInsect();
//  8)          
//  Noun:       man
//  action 1:   the man screams
man.scream();
//  action 2:   the man yells
man.yell();
//  action 3:   the man breaks his legs
man.breakLegs();
//  9)
//  Noun:       rain
//  action 1:   the rain becomes heavier 
rain.becomeHeavier();
//  action 2:   the rain keeps falling
rain.keepFalling();
//  action 3:   the rain comes with thunder
rain.comeWithThunder();
//  10)
//  Noun:       hurricane
//  action 1:   the hurricane blows
hurricane.blow();
//  action 2:   the hurricane heads into Florida
hurricane.headIntoFlorida();
//  action 3:   the hurricane destories the village
hurricane.destoryVillage(); 


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
