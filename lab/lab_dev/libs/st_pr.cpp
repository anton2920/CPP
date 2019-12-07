#include "st_pr.hpp"


study_program::st_pr::st_pr(std::size_t _nstudents, const std::string &_name) : nstudents(_nstudents), name(_name) {

    /* Initializing variables */
    this->curr_nstudents = this->nstudents;
}

size_t study_program::st_pr::getCurrNstudents() const {
    return curr_nstudents;
}

size_t study_program::st_pr::getNstudents() const {
    return nstudents;
}

/*size_t study_program::st_pr::getNgroup() const {
    return ngroup;
}*/

void study_program::st_pr::setCurrNstudents(size_t _currNstudents) {
    curr_nstudents = _currNstudents;
}

void study_program::st_pr::setNstudents(size_t _nstudents) {
    st_pr::nstudents = _nstudents;
}

/*void study_program::st_pr::setNgroup(size_t _ngroup) {
    st_pr::ngroup = _ngroup;
}*/

std::ostream &study_program::operator<<(std::ostream &stream, study_program::st_pr &st) {

    /* Initializing variables */
    std::size_t cnt = st.count_abandoned_students();

    /* I/O flow */
    stream << "Study program name: " << st.name << std::endl <<
            "Current number of students: " << st.curr_nstudents << std::endl <<
            "Total number of students: " << st.nstudents << std::endl <<
            "Percentage of abandoned students: " <<
            (static_cast<double>(cnt) / static_cast<double>(st.nstudents)) * 100 << "%";

    /* Returning value */
    return stream;
}

const std::string &study_program::st_pr::getName() const {

    /* Returning value */
    return name;
}

std::istream &study_program::operator>>(std::istream &stream, study_program::st_pr &st) {

    /* I/O flow */
    std::cout << "Type the total number of students: ";
    stream >> st.nstudents;

    st.curr_nstudents = st.nstudents;

    /* Returning value */
    return stream;
}

void study_program::st_pr::setName(const std::string &_name) {

    /* Main part */
    st_pr::name = _name;
}

study_program::st_pr::~st_pr() = default;