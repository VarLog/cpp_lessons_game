#include <iostream>

class Game 
{
    int run()
    {
        auto a = 2;
        auto b = 4;

        auto answer = 0;

        std::cout << a << " + " << b << std::endl;

        std::cin >> answer;

        if(answer == a + b)
        {
            std::cout << "Correct!" << std::endl;
        }
        else
        {
            std::cout << "Mistake!" << std::endl;
        }

        return 0;
    }
};

int main()
{
    std::cout << "Hello world" << std::endl;

    Game game;

    auto res = game.run();
    return res;
}
