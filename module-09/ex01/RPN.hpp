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

  bool isValidExpression(const std::string &expression);

  void execute(const std::string &expression);
  void handleExpressionChar(const char expressionChar);
};
