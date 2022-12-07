//
// Created by vincent on 2022-12-06.
//

#ifndef PROGMETODIK_LABB4_MAILBOX_H
#define PROGMETODIK_LABB4_MAILBOX_H

#include <iostream>
#include <vector>
#include "Email.h"
#include <algorithm>

class MailBox {

    std::vector<Email> emails;

public:
    MailBox() = default;

    void sortWho();
    void sortDate();
    void sortSubject();

    void push_back(Email& value);
    Email* operator[](size_t index);
    std::vector<Email>::iterator begin();
    std::vector<Email>::iterator end();
    std::vector<Email>::const_iterator begin() const;
    std::vector<Email>::const_iterator end() const;



};


#endif //PROGMETODIK_LABB4_MAILBOX_H
