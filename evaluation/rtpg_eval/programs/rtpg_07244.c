int test_func(void) {
    int v0 = 6;
    int v1 = 43;
    int v2 = 99;
    int i;
    if (v2 > v2) { v2 = v2; }
    v1 = 0;
    v2 = v2 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v1 = v1 / (v2 + 1);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
