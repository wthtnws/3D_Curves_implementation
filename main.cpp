#include <vector>
#include <algorithm>
#include "main.h"
#include "Helix.h"

double sumCircleRadii(std::vector<Circle*> circle_vec)
{
    double sum = 0.0;
    for (const auto elem : circle_vec) {
        sum += elem->getRadiusA();
    }

    std::cout << "Sum of radii: " << sum << std::endl;

    return sum;
}

void clearVec(const std::vector<Ellipse*> &vec)
{
    for (const auto &elem : vec) {
        delete elem;
    }
}

void sortCircleRadii(std::vector<Circle*> &circle_vec)
{
    auto compare = [](Circle* a, Circle* b) -> bool
    {
        return a->getRadiusA() < b->getRadiusA();
    };

    std::sort(circle_vec.begin(), circle_vec.end(), compare);
}

void calculateVecPoint(const std::vector<Ellipse*> &vec, double t)
{
    for (const auto &elem : vec)
    {
        std::cout << elem->getPoint(t).toString() << std::endl;
    }
}

void randomizeContainer(std::vector<Ellipse*>& vec, std::vector<Circle*>& circle_vec)
{
    srand(static_cast<int>(time(nullptr)));

    const int n = rand() % 20 + 10;

    for (int i = 0; i < n; ++i) 
    {
        
        double random_radius_1 = (double)(rand() % 15 + 1);
        double random_radius_2;
        double step;

        Ellipse* p;

        int type = rand() % 3; // 0 - Ellipse, 1 - Circle, 2 - Helix

        Point random_center = Point::getRandom();

        switch (type) 
        {
            case 0:
                random_radius_2 = (double)(rand() % 15 + 1);
                p = new Ellipse(random_center, random_radius_1, random_radius_2);
                vec.push_back(p);
                break;
            case 1:
                p = new Circle(random_center, random_radius_1);
                vec.push_back(p);
                circle_vec.push_back(dynamic_cast<Circle*>(p));
                break;
            case 2:
                step = (double)(rand() % 5 + 1);
                p = new Helix(random_center, random_radius_1, step);
                vec.push_back(p);
                break;
        }
    }
}

int main()
{
    std::vector<Ellipse*> vec;

    std::vector<Circle*> circle_vec;

    randomizeContainer(vec, circle_vec);

    calculateVecPoint(vec, PI / 4);

    sortCircleRadii(circle_vec);

    sumCircleRadii(circle_vec);

    clearVec(vec);
}