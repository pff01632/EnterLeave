#ifndef     _ENTER_LEAVE_H_
#define     _ENTER_LEAVE_H_
#include    <bits/stdc++.h>

class EnterLeave {
    public:
        EnterLeave(std::string name)
        {
            nm = name;
            std::cout << nm << " Enter." << std::endl;
        };
        ~EnterLeave()
        {
            std::cout << nm << " Leave." << std::endl;
        };
    private:
        std::string nm;
};
#define     TRACE()     EnterLeave  trace_instance(__PRETTY_FUNCTION__)

#endif  //  _ENTER_LEAVE_H_
