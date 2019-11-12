#ifndef LAB_DEV_ANIMAL_HPP
#define LAB_DEV_ANIMAL_HPP

/* Header inclusion */
#include <iostream>
#include <string>
#include <ctime>

class animal {
    char *type;
    enum continent {
        NONE,
        Asia,
        Africa,
        North_America,
        South_America,
        Antarctica,
        Europe,
        Australia
    } habitat;
    std::time_t alife_t;

public:
    explicit animal(char *_type = nullptr, continent _habitat = NONE, time_t alifeT = 0);
    animal(const animal &other);
    ~animal();

    animal &operator=(const animal &other);

    friend std::ostream &operator<<(std::ostream &stream, const animal &a);
    friend std::istream &operator>>(std::istream &istream, animal &a);

    [[nodiscard]] char *getType() const;
    [[nodiscard]] continent getHabitat() const;
    [[nodiscard]] time_t getAlifeT() const;

    void setType(char *type);
    void setHabitat(continent habitat);
    void setAlifeT(time_t _alifeT);
};

#endif
