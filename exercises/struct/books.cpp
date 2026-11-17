/**
Group Coding Exercise: Nested Structs + std::vector

Goal: Model a small library using structs and a std::vector<Book>.

Instructions:
  - Implement every function marked TODO. Do not change the signatures.
  - Work through main() from top to bottom, adding code at each TODO.
 */

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ---------- Part 1: Nested structs ----------

// TODO: Define struct Date with int members: month, day, year.


// TODO: Define struct Book with members: title (string),
//       author (string), and dueDate (Date).


// TODO: Print the book in this format:
//         Dune by Frank Herbert
//           Due: 03/15/2025
//       Hint: setw and setfill (from <iomanip>) give you leading zeros.
//             Remember to reset the fill with setfill(' ') afterward.
void printBook(const Book& b) {
}

// TODO: Return true if date a comes strictly before date b.
//       Compare year first, then month, then day.
bool isBefore(Date a, Date b) {
    return false;
}

// TODO: Return true if the book is overdue (today is strictly after
//       the due date). Hint: reuse isBefore.
bool isOverdue(const Book& b, Date today) {
    return false;
}

// ---------- Part 2: Vectors of Books ----------

// TODO: Print every book in the vector using a range-based for loop
//       with const auto&. If the vector is empty, print "  (no books)".
void printAll(const vector<Book>& books) {
}

// TODO: Return how many books in the vector are overdue.
int countOverdue(const vector<Book>& books, Date today) {
    return 0;
}

// TODO: Return a NEW vector containing only the books written by
//       the given author.
vector<Book> findByAuthor(const vector<Book>& books, const string& author) {
    return {};
}

// BONUS TODO: Return a pointer to the first book with the given title,
//             or nullptr if there is no match.
const Book* findByTitle(const vector<Book>& books, const string& title) {
    return nullptr;
}

int main() {
    Date today = {11, 19, 2026};

    // TODO 1: Create a vector<Book> named library using nested brace
    //         initialization with at least 4 books. Include some books
    //         that are overdue relative to `today`, one due exactly on
    //         `today`, and some not yet due. Use at least two books by
    //         the same author.


    // TODO 2: Add two more books to the library:
    //         (a) push_back a braced Book directly
    //         (b) push_back a Book stored in a named variable


    // TODO 3: Print the library size and all books with printAll.


    // TODO 4: Print how many books are overdue as of `today`.


    // TODO 5: Call findByAuthor for an author with multiple books and
    //         print the results with printAll.


    // BONUS: Use findByTitle to look up one title that exists and one
    //        that doesn't. Print the book if found, otherwise a message.


    return 0;
}
