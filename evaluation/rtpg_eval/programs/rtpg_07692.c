int test_func(void) {
    int v0 = 61;
    int v1 = 73;
    int v2 = 25;
    int v3 = 57;
    int v4 = 30;
    int i;
    v2 = v2 - v3;
    v0 = v0 * 7;
    v3 = 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
