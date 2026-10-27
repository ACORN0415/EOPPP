int test_func(void) {
    int v0 = 53;
    int v1 = 26;
    int v2 = 9;
    int v3 = 78;
    int i;
    v1 = 0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
