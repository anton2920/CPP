#ifndef LAB_DEV_CTS_HPP
#define LAB_DEV_CTS_HPP

#include "st_pr.hpp"

namespace study_program {
    class cts : public st_pr {
    public:
        cts() : st_pr() { this->name = "Computer technologies and systems"; }

        std::size_t count_abandoned_students() override;
    };
}

#endif
