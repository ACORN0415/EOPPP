int test_func(void) {
    int v0 = 71;
    int v1 = 97;
    int v2 = 34;
    int v3 = 36;
    int v4 = 4;
    int i;
    v2 = v2 * 7;
    if (v3 > v0) { v3 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v1 = v1 & v2;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
