#include <iostream>

class Christmas_tree
{
public:
    Christmas_tree(int height)
    {
        int additional_height = height;
        int numberOfStars = 1;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < (height + additional_height) / 2; j++)
            {
                std::cout << " ";
            }
            for (int k = 0; k < numberOfStars; k++)
            {
                std::cout << "*";
            }
            numberOfStars += 2;
            additional_height -= 2;
            std::cout << std::endl;

        }
    }


    ~Christmas_tree()
    {

    }


private:
    int height;

};
int main() {


    int height;

    std::cout << "enter height Christmas_tree))" << std::endl;
    std::cin >> height;

    Christmas_tree tree(height);

    return 0;
}
