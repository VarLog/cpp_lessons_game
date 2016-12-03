#include <iostream>
#include <random>

class Game 
{
    int run()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 9);

        auto a = dis(gen);
        auto b = dis(gen);

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
