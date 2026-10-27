int test_func(void) {
    int v0 = 70;
    int v1 = 41;
    int v2 = 42;
    int v3 = 14;
    int v4 = 92;
    int v5 = 69;
    int i;
    v1 = v1 - v4;
    v1 = 51;
    v0 = v0 / (v1 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
