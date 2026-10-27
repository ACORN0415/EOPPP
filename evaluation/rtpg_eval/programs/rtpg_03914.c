int test_func(void) {
    int v0 = 8;
    int v1 = 57;
    int v2 = 8;
    int v3 = 68;
    int v4 = 94;
    int v5 = 87;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 + v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
