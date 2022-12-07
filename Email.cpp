//
// Created by vincent on 2022-12-06.
//

#include "Email.h"

std::ostream &operator<<(std::ostream &out, Email &email) {

    std::cout << "Mail " << "\n" << "Sender: " << email.name << "\n" << "Date: " << email.date << "\n" << "Subject: " << email.subject;

    return out;
}

Email::Email(std::string name, std::string date, std::string subject) :
            name(name), date(date), subject(subject)
{

}

bool CompWhoDateSubject::operator()(const Email &lhs, const Email &rhs) {

    if (lhs.name < rhs.name) return true;
    else if(lhs.name == rhs .name) {
        if (lhs.date < rhs.date) return true;
        else if (lhs.date == rhs.date){
            if (lhs.subject < rhs.subject) return true;
        }
    }
    return false;
}

bool CompDateWhoSubject::operator()(const Email &lhs, const Email &rhs) {
    if (lhs.date < rhs.date) return true;
    else if(lhs.date == rhs.date) {
        if (lhs.name < rhs.name) return true;
        else if(lhs.name == rhs.name){
            if (lhs.subject < rhs.subject) return true;
        }
    }
    return false;
}

bool CompSubjectWheDate::operator()(const Email &lhs, const Email &rhs) {
    if (lhs.subject < rhs.subject) return true;
    else if (lhs.subject == rhs.subject) {
        if (lhs.name < rhs.name) return true;
        else if (lhs.name == rhs.name) {
            if (lhs.date < rhs.date) return true;
        }
    }
    return false;
}
