int test_func(void) {
    int v0 = 21;
    int v1 = 9;
    int v2 = 39;
    int v3 = 17;
    int v4 = 0;
    int v5 = 61;
    int i;
    v4 = v4 + v0;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
