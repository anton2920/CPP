#ifndef LAB_DEV_USER_HPP
#define LAB_DEV_USER_HPP

#include <iostream>
#include <string>
#include <ctime>

class user {
private:
    std::string login;
    std::string pass;
    std::time_t wday;   /* Sunday = 0, Monday = 1, ..., Saturday = 6 */

public:
    explicit user(const std::string &login = "login", const std::string &pass = "password", time_t wday = 0);
    user(const user &other);
    virtual ~user();

    user &operator=(const user &other);
    bool operator<(const user &other) const;
    bool operator==(const user &other) const;

    friend std::ostream &operator<<(std::ostream &stream, const user &u);
    friend std::istream &operator>>(std::istream &stream, user &u);

    [[nodiscard]] const std::string &getLogin() const;
    [[nodiscard]] const std::string &getPass() const;
    [[nodiscard]] time_t getWday() const;

    void setLogin(const std::string &_login);
    void setPass(const std::string &_pass);
    void setWday(time_t _wday);
};

#endif
