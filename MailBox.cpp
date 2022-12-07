//
// Created by vincent on 2022-12-06.
//


#include "MailBox.h"

void MailBox::sortWho() {
    CompWhoDateSubject comp;
    std::sort(emails.begin(), emails.end(), comp);
}

void MailBox::sortDate() {
    CompDateWhoSubject comp;
    std::sort(emails.begin(), emails.end(), comp);
}

void MailBox::sortSubject() {
    CompSubjectWheDate comp;
    std::sort(emails.begin(), emails.end(), comp);
}

std::vector<Email>::iterator MailBox::begin() {
    return emails.begin();
}

std::vector<Email>::iterator MailBox::end() {
    return emails.end();
}

std::vector<Email>::const_iterator MailBox::begin() const {
    return emails.begin();
}

std::vector<Email>::const_iterator MailBox::end() const {
    return emails.end();
}

Email* MailBox::operator[](size_t index) {
    return &emails[index];
}

void MailBox::push_back(Email& value) {
    emails.push_back(value);
}

