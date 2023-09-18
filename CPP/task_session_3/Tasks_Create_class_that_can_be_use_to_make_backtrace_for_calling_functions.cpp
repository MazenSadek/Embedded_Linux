
#include <iostream>
#include <string>
#include <stack>
void fun2();
void fun3();
class FunctionTracer {
public:
    FunctionTracer(const std::string& functionName) : functionName_(functionName) {
        callStack_.push(functionName_);
         std::cout << "Entering function: " << functionName_ << std::endl;
    }

    ~FunctionTracer() {
        callStack_.pop();
        std::cout << "Exiting function: " << functionName_ << std::endl;
    }

    static void PrintBacktrace() {
        std::stack<std::string> tempStack = callStack_;
        std::cout << "Function call backtrace:" << std::endl;
        while (!tempStack.empty()) {
            std::cout << tempStack.top() << std::endl;
            tempStack.pop();
        }
    }

private:
    std::string functionName_;
    static std::stack<std::string> callStack_;
};

std::stack<std::string> FunctionTracer::callStack_;

// Helper macro to make it easy to create a FunctionTracer object in each function
#define TRACE_FUNCTION FunctionTracer functionTracer(__func__)

// Example usage
void fun() {
    TRACE_FUNCTION;
     fun2();
  
    // Function code here
}

void fun2() {
    TRACE_FUNCTION;
    fun3();
    // Function code here
}

void fun3(){
TRACE_FUNCTION;
FunctionTracer::PrintBacktrace();

}
int main() {

    TRACE_FUNCTION;

    fun();
   

  

    return 0;
}
