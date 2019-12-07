//
// Created by arun on 07/12/19.
//

#ifndef LIBRARY_MANAGEMENT_BOOK_H
#define LIBRARY_MANAGEMENT_BOOK_H

#endif //LIBRARY_MANAGEMENT_BOOK_H

#include <list>

using namespace std;

class Book {
public:
    Book(void);
    Book(const string& author, const string& title);

    void read(ifstream& inStream);
    void write(ofstream& outStream) const;

    void borrowBook(int customerId);
    void returnBook();
    int reserveBook(int customerId);
    void unreserveBook(int customerId);

    int bookId(void) const { return m_bookId; }
    bool borrowed(void) const { return m_borrowed; }
    int customerId(void) const { return m_customerId; }

    list<int>& reservList(void) { return m_reservationList; }
    const string& author(void) const { return m_author; }
    const string& title(void) const { return m_title; }

    static int MaxBookId;
    friend ostream& operator<<(ostream& outStream, const Book& book);


private:
    bool m_borrowed = false;
    int m_bookId, m_customerId;
    string m_author, m_title;
    list<int> m_reservationList;
};
