//#include <vector>
//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <fstream>
//using namespace std;
//class Book {
//public:
//    string title;
//    string author;
//    int publicationYear;
//    Book(string title, string author, int publicationYear) {
//        this->title = title;
//        this->author = author;
//        this->publicationYear = publicationYear;
//    }
//    string getTitle() const 
//    {
//        return title;
//    }
//    string getAuthor() {
//        return author;
//    }
//    int getPublicationYear() {
//        return publicationYear;
//    }
//};
//class Library {
//private:
//    vector<Book> books;
//public:
//    void addBook(Book book) {
//        books.push_back(book);
//    }
//    void removeBook(const string& title) 
//    {
//        for (auto it = books.begin(); it != books.end(); ++it)
//        {
//            if (it->getTitle() == title)
//            {
//				books.erase(it);
//				return;
//			}
//		}
//    }
//    void listBooks() 
//    {
//        for (int i = 0; i < books.size(); i++) {
//            cout << "Title: " << books[i].getTitle() << ", Author: " << books[i].getAuthor() << ", Publication Year: " << books[i].getPublicationYear() << endl;
//        }
//    }
//    void searchBook(const string& title) 
//    {
//        for (auto it = books.begin(); it != books.end(); ++it)
//        {
//            if (it->getTitle() == title)
//            {
//				cout << "Title: " << it->getTitle() << ", Author: " << it->getAuthor() << ", Publication Year: " << it->getPublicationYear() << endl;
//				return;
//			}
//        }
//        cout << "Book not found." << endl;
//    }
//};
//int main() {
//    Library library;
//    string bookname;
//    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
//    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
//    Book book3("1984", "George Orwell", 1949);
//    library.addBook(book1);
//    library.addBook(book2);
//    library.addBook(book3);
//    library.listBooks();
//    cout << "***********************************\n";
//    cout << "Book to remove: ";
//    getline(cin, bookname);
//    library.removeBook(bookname);
//    cout << "After Removing : \n";
//    library.listBooks();
//    cout << "Book to search: ";
//    getline(cin, bookname);
//    library.searchBook(bookname);
//    return 0;
//}