//
// Created by vincent on 2022-12-06.
//

#ifndef PROGMETODIK_LABB4_EMAIL_H
#define PROGMETODIK_LABB4_EMAIL_H

#include <iostream>

class Email {

    std::string name;
    std::string date;
    std::string subject;

public:

    Email(std::string name, std::string date, std::string subject);

    friend std::ostream& operator<< (std::ostream& out, Email& email);

    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWheDate;

};


struct CompWhoDateSubject {
    bool operator() (const Email& lhs, const Email& rhs);
};
struct CompDateWhoSubject {
    bool operator() (const Email& lhs, const Email& rhs);
};
struct CompSubjectWheDate {
    bool operator() (const Email& lhs, const Email& rhs);
};


#endif //PROGMETODIK_LABB4_EMAIL_H
