/**
 * @file library1.h
 * @author Kousika.R (kousirajasekar12@gmail.com)
 * @brief Header file for Library-Management-System
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _LIBRARY_H
#define _LIBRARY_H  

/** 
 * @brief structure to store book details 
 * @brief structure to store member of library details
 * 
 */
 
 struct books{
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
}b;

struct member{
    int id;
    char mName[50]; 
    char bookName[50];
    char date[12];
}m;
/** 
 * @brief functions to add, issue, view issued list and delete books from the list
 */ 
void addBook() 
{ 
/** 
 * @brief this function adds new book to the system
 */ 

} 

void booksList()
{ 
/** 
 * @brief this function displays the booklist in the system
 */
} 

void del() 
{ 

/** 
 * @brief this function deletes a book from the list
 */
} 

void issueBook() 
{ 

/** 
 * @brief this function shows the books issued to the members
 */ 

}


#endif// _LIBRARY_H   


