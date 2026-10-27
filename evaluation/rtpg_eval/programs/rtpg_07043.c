int test_func(void) {
    int v0 = 22;
    int v1 = 76;
    int v2 = 31;
    int v3 = 14;
    int i;
    v1 = 36;
    v1 = v1 + v1;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 / (v1 + 1);
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
