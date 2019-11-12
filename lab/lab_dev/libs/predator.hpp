#ifndef LAB_DEV_PREDATOR_HPP
#define LAB_DEV_PREDATOR_HPP

/* Header inclusion */
#include "animal.hpp"

class predator : public animal {
    std::size_t aspeed;

public:
    explicit predator(std::size_t _aspeed = 0);
    virtual ~predator();
};

#endif
