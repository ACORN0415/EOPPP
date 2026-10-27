int test_func(void) {
    int v0 = 61;
    int v1 = 26;
    int v2 = 9;
    int v3 = 80;
    int v4 = 81;
    int v5 = 81;
    int v6 = 44;
    int v7 = 28;
    int i;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
