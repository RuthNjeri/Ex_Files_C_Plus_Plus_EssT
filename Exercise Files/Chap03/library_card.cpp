#include <cstdio>

struct LibraryCard {
    const char * title;
    const char * author;
    const char * publisher;
    const char * subject;
    const char * isbn;
    int worldcat;
    int dewey_decimal;
    int year_published;
    int year_acquired;
    int quantity_in_stock;
};

int main() {
    LibraryCard card = {"Harry Porter", "JK", "England", "Magic", "18393388383", 123, 455, 2005, 2020, 2000};
    
    printf("Title: %s\n", card.title);
    printf("Author: %s\n", card.author);
    printf("Publisher %s\n", card.publisher);
    printf("Subject: %s\n", card.subject);
    printf("isbn: %s\n", card.isbn);
    printf("worldcat: %d\n", card.worldcat);
    printf("Dewey Decimal: %d\n", card.dewey_decimal);
    printf("Year Published: %d\n", card.year_published);
    printf("Year Acquired: %d\n", card.year_acquired);
    printf("Quantity in stock: %d\n", card.quantity_in_stock);
    return 0;
}
