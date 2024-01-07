#include <iostream>
#include <cstdlib>

/*
    one thing to note is that is that, we should not forward jump for a definition or initialization of the variable used in the statement label that we jumping on
    ex:
        goto label;
        const int x{12};

        label:
            std::cout << x << '\n';

    problem:
        we direclty jumped off over the initialization of a variable used in the label we jumped in
        for that label now, the initialization of x was never known, hence error 
    conclusion:
        unconditional forward jumping should not bypass any variable initialization

    NOTE :  
        statement label should be associated with statements and should not be left empty(without any statement)
*/

void run(bool skip){
    if (skip)   goto end;
    std::cout << "Not funny I didn't laugh. Your joke is so bad I would have preferred the joke went over my head and you gave up re-telling me the joke. To be honest this is a horrid attempt at trying to get a laugh out of me. Not a chuckle, not a hehe, not even a subtle burst of air out of my esophagus. Science says before you laugh your brain preps your face muscles but I didn't even feel the slightest twitch. 0/10 this joke is so bad I cannot believe anyone legally allowed you to be creative at all. The amount of brain power you must have put into that joke has the potential to power every house on Earth. Get a personality and learn how to make jokes, read a book. I'm not saying this to be funny I genuinely mean it on how this is just bottom barrel embarrassment at comedy. You've single handedly killed humor and every comedic act on the planet. I'm so disappointed that society has failed as a whole in being able to teach you how to be funny. Honestly if I put in all my power and time to try and make your joke funny it would require Einstein himself to build a device to strap me into so I can be connected to the energy of a billion stars to do it, and even then all that joke would get from people is a subtle scuff. You're lucky I still have the slightest of empathy for you after telling that joke otherwise I would have committed every war crime in the book just to prevent you from attempting any humor ever again. We should put that joke in text books so future generations can be wary of becoming such an absolute comedic failure. Im disappointed, hurt, and outright offended that my precious time has been wasted in my brain understanding that joke. In the time that took I was planning on helping kids who have been orphaned, but because of that you've waisted my time explaining the obscene integrity of your terrible attempt at comedy. Now those kids are suffering without meals and there's nobody to blame but you. I hope you're happy with what you have done and I truly hope you can move on and learn from this piss poor attempt";
    end:
        ;
}

int main(){
    run(true);      // jumped this time
    run(false);     // no unconditional jump this time

    return EXIT_SUCCESS;
}