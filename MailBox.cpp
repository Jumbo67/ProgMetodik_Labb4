//
// Created by vincent on 2022-12-06.
//


#include "MailBox.h"

void MailBox::sortWho() {
    std::sort(emails.begin(), emails.end(), CompWhoDateSubject());
}

void MailBox::sortDate() {
    std::sort(emails.begin(), emails.end(), CompDateWhoSubject());
}

void MailBox::sortSubject() {
    std::sort(emails.begin(), emails.end(), CompSubjectWheDate());
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

