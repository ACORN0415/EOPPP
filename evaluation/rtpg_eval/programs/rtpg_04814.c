int test_func(void) {
    int v0 = 47;
    int v1 = 82;
    int v2 = 61;
    int v3 = 11;
    int v4 = 47;
    int v5 = 34;
    int v6 = 73;
    int i;
    v0 = 27;
    v3 = v3 - v1;
    v3 = v3 * 6;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
