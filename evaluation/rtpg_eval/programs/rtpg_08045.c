int test_func(void) {
    int v0 = 67;
    int v1 = 12;
    int v2 = 1;
    int v3 = 62;
    int i;
    v3 = 67;
    v0 = v0 - v3;
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
