#ifndef LAB_DEV_IS_HPP
#define LAB_DEV_IS_HPP

#include "st_pr.hpp"

namespace study_program {
    class is : public st_pr {
    public:
        std::size_t count_abandoned_students() override;
    };
}

#endif
