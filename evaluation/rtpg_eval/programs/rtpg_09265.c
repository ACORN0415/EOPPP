int test_func(void) {
    int v0 = 34;
    int v1 = 40;
    int v2 = 37;
    int v3 = 74;
    int v4 = 42;
    int i;
    v0 = v0 - v2;
    v1 = v1 + v2;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v4 = v4 | v0;
    return v0;
}
int main(void) { return test_func(); }
