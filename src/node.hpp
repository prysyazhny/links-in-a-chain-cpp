#pragma once

#include <string>
#include "link.hpp"

class Node
{
private:
    Link *link;
    Node *next_node;

public:
    explicit Node(Link *link)
    {
        this->link = link;
        this->next_node = nullptr;
    }

    Node(Link *link, Node *next_node)
    {
        this->link = link;
        this->next_node = next_node;
    }

    Node(Node *other)
    {
        if (other == nullptr)
        {
            this->link = nullptr;
            this->next_node = nullptr;
        }
        else
        {
            this->link = other->link;
            this->next_node = other->next_node;
        }
    }

    Node(Link *link, Link *next_link)
    {
        this->link = link;
        if (next_link == nullptr)
        {
            this->next_node = nullptr;
        }
        else
        {
            this->next_node = new Node(next_link);
        }
    }

    Node *next()
    {
        return this->next_node;
    }

    Link *get_link()
    {
        return this->link;
    }
};
