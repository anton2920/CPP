#ifndef LAB_DEV_ST_PR_HPP
#define LAB_DEV_ST_PR_HPP

#include <iostream>

namespace study_program {
    class st_pr {
    protected:
        std::size_t curr_nstudents;
        std::size_t nstudents;

        std::string name;

//        std::size_t ngroup;
    public:
        explicit st_pr(std::size_t _nstudents = 0, const std::string &_name = "");
        virtual ~st_pr();

        virtual size_t count_abandoned_students() = 0;

        std::size_t getCurrNstudents() const;
        std::size_t getNstudents() const;
//        std::size_t getNgroup() const;
        const std::string &getName() const;

        void setCurrNstudents(size_t _currNstudents);
        void setNstudents(size_t _nstudents);
//        void setNgroup(size_t _ngroup);
        void setName(const std::string &_name);

        friend std::ostream &operator<<(std::ostream &stream, st_pr &st);
        friend std::istream &operator>>(std::istream &stream, st_pr &st);
    };
}


#endif