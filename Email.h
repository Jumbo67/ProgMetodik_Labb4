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

    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWheDate;

public:

    friend operator()<<





};


#endif //PROGMETODIK_LABB4_EMAIL_H
