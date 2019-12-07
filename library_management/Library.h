//
// Created by arun on 07/12/19.
//

#ifndef LIBRARY_MANAGEMENT_LIBRARY_H
#define LIBRARY_MANAGEMENT_LIBRARY_H

#endif //LIBRARY_MANAGEMENT_LIBRARY_H

#include <map>

class Library {
public:
    Library();

private:
    static std::string s_binaryPath;

    bool lookupBook(const std::string& author, const std::string& title, Book* bookPtr = nullptr);
    bool lookupCustomer(const std::string& name, const std::string& address, Customer* customerPtr = nullptr);

    void addBook(void);
    void deleteBook(void);
    void listBooks(void);
    void addCustomer(void);
    void deleteCustomer(void);
    void listCustomers(void);
    void borrowBook(void);
    void reserveBook(void);
    void returnBook(void);

    void load();
    void save();

public:
    static map<int,Book> s_bookMap;
    static map<int, Customer> s_customerMap;

    static map<int,int> bookLoanMap;
    static map<int,set<int>> bookReservationSetMap;

    static map<int,set<int>> customerLoanSetMap;
    static map<int,set<int>> customerReservationSetMap;
};