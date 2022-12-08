//
// Created by vincent on 2022-12-06.
//

#include "Email.h"

std::ostream &operator<<(std::ostream &out, Email &email) {
    std::cout << "Sender: " << email.name << "\n" << "Date: " << email.date << "\n" << "Subject: " << email.subject;
    return out;
}

Email::Email(std::string name, std::string date, std::string subject) :
            name(name), date(date), subject(subject)
{
}

bool CompWhoDateSubject::operator()(const Email &lhs, const Email &rhs) {
    if (lhs.name != rhs.name)
        return lhs.name < rhs.name;
    if (lhs.date != rhs.date)
        return lhs.date < rhs.date;

    return lhs.subject < rhs.subject;
}

bool CompDateWhoSubject::operator()(const Email &lhs, const Email &rhs) {
    if (lhs.date != rhs.date)
        return lhs.date < rhs.date;
    if (lhs.name != rhs.name)
        return lhs.name < rhs.name;

    return lhs.subject < rhs.subject;
}

bool CompSubjectWheDate::operator()(const Email &lhs, const Email &rhs) {
    if (lhs.subject != rhs.subject)
        return lhs.subject < rhs.subject;
    if (lhs.name != rhs.name)
        return lhs.name < rhs.name;

    return lhs.date < rhs.date;
}
