#ifndef BRAIN_HPP
#define BRAIN_HPPü

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &);
    Brain &operator=(const Brain &);
};
#endif