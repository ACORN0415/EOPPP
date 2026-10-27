int test_func(void) {
    int v0 = 19;
    int v1 = 22;
    int v2 = 55;
    int v3 = 6;
    int v4 = 10;
    int v5 = 77;
    int v6 = 39;
    int i;
    v5 = v5 * 8;
    v3 = v3 % (v0 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
