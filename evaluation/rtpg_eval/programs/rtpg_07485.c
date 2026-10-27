int test_func(void) {
    int v0 = 51;
    int v1 = 28;
    int v2 = 38;
    int i;
    v1 = 43;
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
