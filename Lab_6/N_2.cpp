#include <iostream>
#include <vector>

void Worry(std::vector<bool>* v, unsigned it)
{
    (*v)[it] = true;
}

void Quiet(std::vector<bool>* v, unsigned it)
{
    (*v)[it] = false;
}

void Come(std::vector<bool>* v, unsigned it)
{
    if(it > 0)
        (*v).insert((*v).end(), it, false);
    else
        (*v).erase((*v).end() - it, (*v).end());
}

unsigned Worry_count(const std::vector<bool>& v)
{
    unsigned count{0};
    for(bool i : v)
        if(i)
            ++count;
    return count;
}

int main()
{
    int n{0};
    std::vector<bool> people(0);
    std::vector<unsigned> counts(0);
    std:: cin >> n;
    for(int i{0}; i < n; ++i)
    {
        std::string command;
        unsigned it;
        std::getline(std::cin, command, ' ');
        if(command != "WORRY_COUNT")
            std::cin >> it;

        if(command == "WORRY")
            Worry(&people, it);
        if(command == "QUIET")
            Quiet(&people, it);
        if(command == "COME")
            Come(&people, it);
        if(command == "WORRY_COUNT")
            counts.push_back(Worry_count(people));
    }
    for(unsigned i : counts)
        std::cout << i << ' ';
}