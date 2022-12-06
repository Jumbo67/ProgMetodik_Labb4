//
// Created by vincent on 2022-12-06.
//

#include "Email.h"

struct Email::CompWhoDateSubject{
    bool operator()() {
        return true;
    }
};

struct Email::CompDateWhoSubject {
    bool operator()() {
        return true;
    }
};

struct Email::CompSubjectWheDate {
    bool operator()() {
        return true;
    }
};
