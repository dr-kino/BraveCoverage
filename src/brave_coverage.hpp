#ifndef BRAVE_COVERAGE_HPP
#define BRAVE_COVERAGE_HPP

class Sum
{
public:
    Sum() { };
    ~Sum() { };

    void setAValue(int A);
    void setBValue(int B);
    int executeSum(void);

private:
    int _A = 0;
    int _B = 0;
};

#endif //BRAVE_COVERAGE_HPP