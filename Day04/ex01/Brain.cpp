#include "Brain.hpp"

string Brain::getIdeas(int i) const
{
    return *this->ideas[i];
}

Brain::Brain()
{
    string e = "eat";
    string s = "sleep";
    cout << "Brain created" << endl;
    for(int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            ideas[i] = &e;
        else
            ideas[i] = &s;
        cout << getIdeas(i) << " is a good idea .." << endl;
    }
}

Brain::Brain(const Brain &params)
{
   for (int i = 0; i < 100; i++)
       this->ideas[i] = params.ideas[i];
}

Brain   &Brain::operator=(const Brain &params)
{
    if (this != &params)
        for(int i = 0; i < 100; i++)
            this->ideas[i] = params.ideas[i];
    return *this;
}

Brain::~Brain()
{
    cout << "Brain destroyed" << endl;
}