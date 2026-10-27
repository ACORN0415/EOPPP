int test_func(void) {
    int v0 = 8;
    int v1 = 39;
    int v2 = 22;
    int v3 = 59;
    int v4 = 71;
    int v5 = 8;
    int v6 = 82;
    int i;
    v1 = v1 + v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
