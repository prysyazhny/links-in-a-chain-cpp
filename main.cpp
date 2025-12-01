#include <iostream>

#include "src/hello.hpp"
#include "src/link.hpp"
#include "src/node.hpp"

int main()
{
  std::cout << hello() << std::endl;

  Link gold = Link("Gold");
  Node node_one = new Node(&gold);

  Link silver = Link("Silver");
  Node node_two = new Node(&silver, &gold);

  Link bronze = Link("Bronze");
  Node node_three = new Node(&bronze, &silver);

  Node retrieved_node_two = node_one.next();
  Node retrieved_node_three = node_two.next();
}
