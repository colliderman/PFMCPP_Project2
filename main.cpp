#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 bool
 char
 int
 float
 double
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    bool play = true;
    bool stop = false;
    bool loop = 1;
    
    char a = 'a';
    char b = 'b';
    char str[6] = {'s','t','r','i','n','g'};

    int i = 47;
    unsigned int sampleRate = 44100;
    int fingersOnHand = 10;

    float decimal = 2.76f;
    float knobValue = 0.1f;
    float temperature = 32.0f;

    double percentage = 87.0;
    double maxValue = 128.0;
    double minValue = 0.01;
    
  
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(play);
    ignoreUnused(stop);
    ignoreUnused(loop);
    
    ignoreUnused(a);
    ignoreUnused(b);
    ignoreUnused(str);

    ignoreUnused(i);
    ignoreUnused(sampleRate);
    ignoreUnused(fingersOnHand);

    ignoreUnused(decimal);
    ignoreUnused(knobValue);
    ignoreUnused(temperature);

    ignoreUnused(percentage);
    ignoreUnused(maxValue);
    ignoreUnused(minValue);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool startPlaying(bool isPlaying, int numOfLoops, bool isLooping = true)
{
    ignoreUnused(isPlaying, isLooping, numOfLoops);
    return{};
}

/*
 2)
 */
int addNumbers(int num1, int num2)
{
    ignoreUnused(num1, num2);
    return{};
}

/*
 3)
 */
void buttonHandler(bool button1, bool button2)
{
    ignoreUnused(button1, button2);
}

/*
 4)
 */
float addDecimals(float num1, float num2, float num3 = 49.9f)
{
    ignoreUnused(num1, num2, num3);
    return{};
}

/*
 5)
 */
int setSampleRate(int currentSampleRate, int newSampleRate)
{
    ignoreUnused(currentSampleRate, newSampleRate);
    return {};
}

/*
 6)
 */
int setRange(int minValue, int maxValue)
{
    ignoreUnused(minValue, maxValue);
    return{};
}

/*
 7)
 */
void flashLeds(int led1, int led2, int led3)
{
    ignoreUnused(led1, led2, led3);
}

/*
 8)
 */
void setKnobValue(double currentVal, double newVal, double range)
{
    ignoreUnused(currentVal, newVal, range);
}

/*
 9)
 */
bool runningOutOfFunctionIdeas(int numFuncsCreated, int numFuncsNeeded,bool ideasRemaining)
{
    ignoreUnused(numFuncsCreated, numFuncsNeeded, ideasRemaining);
    return{};
}

/*
 10)
 */
void throwBall(bool isGoodBoy, int distanceToThrow, bool rightHanded = true)
{
    ignoreUnused(isGoodBoy, distanceToThrow, rightHanded);
}
 

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto playState = startPlaying(false, 4, true);
    
    //2)
    auto sum = addNumbers(42, 67);

    //3)
    buttonHandler(6, 9);
    
    //4)
    auto decimalSum = addDecimals(3.6f, 4.29f, 16.8f);

    //5)
    auto sampleRate = setSampleRate(44100, 48000);
    
    //6)
    auto range = setRange(1, 100);
    
    //7)
    flashLeds(1, 2, 3);

    //8)
    setKnobValue(0.01, 0.72, 1.0);
    
    //9)
    auto hasIdeasLeft = runningOutOfFunctionIdeas(9, 10, false);
    
    //10)
    throwBall(true, 10, true);
    
    ignoreUnused(carRented, playState, sum, decimalSum, sampleRate, range, hasIdeasLeft);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
