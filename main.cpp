#include <iostream>
#include "MailBox.h"


void printMailBox(const MailBox& vector) {
    for (auto value : vector) {
        std::cout << value << "\n";
        std::cout << "\n";
    }
}

int main() {
    MailBox mailBox;

    std::vector<Email> mails = {{"Vincent Johansson", "2022-12-07", "Breakfeast in bed"}, {"Gillian Persson", "2022-12-05", "Hello to you"},
                                {"Bill Gates", "2022-12-01", "Free money"}, {"Jeff Bezos", "2021-04-12", "Business offer"}, {"Doomguy", "2020-01-02", "Rip and tear"}};

    for (Email email : mails) {
        mailBox.push_back(email);
    }

    mailBox.sortWho();

    printMailBox(mailBox);

    return 0;
}
