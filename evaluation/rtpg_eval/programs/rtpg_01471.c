int test_func(void) {
    int v0 = 96;
    int v1 = 39;
    int v2 = 31;
    int v3 = 78;
    int v4 = 67;
    int v5 = 22;
    int v6 = 3;
    int i;
    v6 = v6 * 3;
    if (v0 > v1) { v0 = v1; }
    v5 = v5 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
