int test_func(void) {
    int v0 = 94;
    int v1 = 95;
    int v2 = 38;
    int i;
    v2 = 40;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
