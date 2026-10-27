int test_func(void) {
    int v0 = 54;
    int v1 = 56;
    int v2 = 50;
    int v3 = 6;
    int v4 = 94;
    int v5 = 53;
    int v6 = 80;
    int i;
    v0 = v0 - v5;
    v2 = v2 + v4;
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
