#ifndef LAB_DEV_PREDATOR_HPP
#define LAB_DEV_PREDATOR_HPP

/* Header inclusion */
#include "animal.hpp"

class predator : public animal {
    std::size_t aspeed;

public:
    explicit predator(char *_type = nullptr, animal::continent _habitat = animal::NONE, time_t alifeT = 0, std::size_t _aspeed = 0);
    predator(const predator &other);
    virtual ~predator();

    friend std::ostream &operator<<(std::ostream &stream, predator &p);
    friend std::istream &operator>>(std::istream &stream, predator &p);

    [[nodiscard]] size_t getAspeed() const;

    void setAspeed(size_t _aspeed);
};

#endif
