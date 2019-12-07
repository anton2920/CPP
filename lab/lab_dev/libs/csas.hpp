#ifndef LAB_DEV_CSAS_HPP
#define LAB_DEV_CSAS_HPP

#include "st_pr.hpp"

namespace study_program {
    class csas : public st_pr {
    private:
        const std::string main_troll = "Andrey Anatolyevich";

    public:
        csas() : st_pr() { this->name = "Computer science and software"; }

        std::size_t count_abandoned_students() override;
    };
}

#endif
