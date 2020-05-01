union mytypes_t {
  char c;
  int i;
  float f;
  } mytypes;

mytypes.c
mytypes.i
mytypes.f

union mix_t {
  long l;
  struct {
    short hi;
    short lo;
    } s;
  char c[4];
} mix;

//Normal unions
struct {
  char title[50];
  char author[50];
  union {
    float dollars;
    int yen;
  } price;
} book;

book.price.dollars
book.price.yen

//Anonymous unions
struct {
  char title[50];
  char author[50];
  union {
    float dollars;
    int yen;
  };
} book;

book.dollars
book.yen