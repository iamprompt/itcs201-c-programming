#include <stdio.h>

#define MAX 16

struct authorInfo
{
    int author_id;
    char author_name[MAX];
};

struct bookInfo
{
    int book_id;
    char book_name[MAX];
    int n_authors;

    struct authorInfo author[2];
};

void getBook(struct bookInfo book)
{
    scanf("%d", &book.book_id);
    scanf("%s", book.book_name);
    scanf("%d", &book.n_authors);

    struct authorInfo author[book.n_authors];

    for (int i = 0; i < book.n_authors; i++)
    {
        scanf("%d", &book.author[i].author_id);
        scanf("%s", book.author[i].author_name);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    struct bookInfo book[n];

    for (int i = 0; i < n; i++)
    {
        getBook(book[i]);
    }
}