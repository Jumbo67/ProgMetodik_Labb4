#include <iostream>
#include "MailBox.h"

template<typename cont>
void show(const cont& vector) {
    for (auto value : vector) {
        std::cout << value << "\n";
        std::cout << "\n";
    }
}

int main() {
    MailBox mailBox;

    std::vector<Email> emails = {{"Vincent Johansson", "2022-12-07", "Breakfeast in bed"}, {"Gillian Persson", "2022-12-05", "Hello to you"},
                                {"Bill Gates", "2022-12-01", "Free money"}, {"Jeff Bezos", "2021-04-12", "Business offer"}, {"Doomguy", "2020-01-02", "Rip and tear"}};

    for (Email email : emails) {
        mailBox.push_back(email);
    }
    std::cout << "------NoSort-----" << "\n";
    show(mailBox);
    std::cout << "------Sortwho-----" << "\n";
    mailBox.sortWho();
    show(mailBox);
    std::cout << "------SortDate-----" << "\n";
    mailBox.sortDate();
    show(mailBox);
    std::cout << "------SortSubject-----" << "\n";
    mailBox.sortSubject();
    show(mailBox);


    return 0;
}
