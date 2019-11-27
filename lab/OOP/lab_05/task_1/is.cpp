#include <cmath>

#include "is.hpp"

const double decrement = 0.03;

std::size_t study_program::is::count_abandoned_students() {

    /* Main part */
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);
    this->curr_nstudents -= static_cast<int>(ceil(static_cast<double>(this->curr_nstudents)) * decrement);

    return (this->nstudents - this->curr_nstudents);
}