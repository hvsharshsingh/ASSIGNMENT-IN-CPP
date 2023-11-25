#include <iostream>
#include <stack>
#include <string>

class ExpressionValidator {
private:
    std::string expression;

public:
    // Constructor to initialize the expression
    ExpressionValidator(const std::string& expr) : expression(expr) {}

    // Member function to check the validity of the expression
    bool isValidExpression() const {
        std::stack<char> parenthesesStack;

        for (char ch : expression) {
            if (ch == '(' || ch == '[' || ch == '{') {
                parenthesesStack.push(ch);
            } else if (ch == ')' || ch == ']' || ch == '}') {
                if (parenthesesStack.empty() || !isValidPair(parenthesesStack.top(), ch)) {
                    return false; // Invalid expression
                }
                parenthesesStack.pop();
            }
        }

        return parenthesesStack.empty(); // Valid if the stack is empty
    }

private:
    // Helper function to check if a pair of parentheses is valid
    bool isValidPair(char open, char close) const {
        return (open == '(' && close == ')') ||
               (open == '[' && close == ']') ||
               (open == '{' && close == '}');
    }
};

int main() {
    // Create an object of the ExpressionValidator class with an expression
    ExpressionValidator expressionValidatorObject("{[a + b] * (c - d)}");

    // Check and print the validity of the expression
    if (expressionValidatorObject.isValidExpression()) {
        std::cout << "The expression is valid." << std::endl;
    } else {
        std::cout << "The expression is not valid." << std::endl;
    }

    return 0;
}