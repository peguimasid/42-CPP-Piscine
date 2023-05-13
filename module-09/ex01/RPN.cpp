#include "RPN.hpp"

bool error(std::string errorMessage) {
  std::cerr << "\033[0;31m";
  std::cerr << errorMessage << std::endl;
  std::cerr << "\033[0m";
  return false;
}

RPN::RPN() {}

RPN::RPN(const RPN &other) {
  this->_stack = other._stack;
}

RPN &RPN::operator=(const RPN &other) {
  if (this == &other) return *this;
  this->_stack = other._stack;
  return *this;
}

RPN::~RPN() {}

bool RPN::isValidExpression(const std::string &expression) {
  std::string validChars = "0123456789 ";
  std::string validOperators = "+-*/";

  int numbersCount = 0;
  int operatorsCount = 0;

  for (size_t i = 0; i < expression.size(); i++) {
    int charIndex = validChars.find(expression[i]);
    int operatorIndex = validOperators.find(expression[i]);
    if (charIndex < 0 && operatorIndex < 0) {
      return error("Error: Invalid char");
    }
    if (charIndex >= 0 && expression[i] != ' ') numbersCount++;
    if (operatorIndex >= 0) operatorsCount++;
  }

  if (numbersCount <= operatorsCount) {
    return error("Error: Invalid RPN expression");
  }

  return true;
}

int RPN::executeOperation(int topElement, const char op) {
  if (op == '*') return this->_stack.top() * topElement;
  if (op == '/') return this->_stack.top() / topElement;
  if (op == '+') return this->_stack.top() + topElement;
  if (op == '-') return this->_stack.top() - topElement;
  return 0;
}

void RPN::handleExpressionChar(const char expressionChar) {
  if (isdigit(expressionChar)) return this->_stack.push(expressionChar - '0');

  std::string validOperators = "+-*/";
  bool isOperator = validOperators.find(expressionChar) != std::string::npos;

  if (!isOperator) return;

  if (this->_stack.size() < 2) {
    error("Error: Irregular expression");
    exit(1);
  }

  int topElement = this->_stack.top();

  if (topElement == 0 && expressionChar == '/') {
    error("Error: Cannot divide by 0");
    exit(1);
  }

  this->_stack.pop();
  this->_stack.top() = executeOperation(topElement, expressionChar);
}

void RPN::execute(const std::string &expression) {
  if (!isValidExpression(expression)) return;
  for (size_t i = 0; i < expression.size(); i++) {
    handleExpressionChar(expression[i]);
  }
  std::cout << this->_stack.top() << std::endl;
}
