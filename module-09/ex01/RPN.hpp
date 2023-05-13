#pragma once
#include <iostream>
#include <stack>

class RPN {
 private:
  std::stack<int> _stack;

 public:
  // Constructors and Destructors
  RPN();
  RPN(const RPN &other);
  RPN &operator=(const RPN &other);
  ~RPN();

  void execute(const std::string &expression);
};
