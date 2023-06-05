#include <stdio.h>
struct store
{
    double price;
    union
    {
        struct
        {
            char *title;
            char *author;
            int number_page;
        } book;
        struct
        {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
};
int main()
{
    struct store s;
    s.item.book.title = "c programming";
    s.item.book.author = "dileep";
    s.item.book.number_page = 111;
    printf("book name:%s\n", s.item.book.title);
    printf("book writer:%s\n", s.item.book.author);
    printf("book name:%d\n", s.item.book.number_page);
    printf("size of store:%ld", sizeof(s));
    return 0;
}
