int test_func(void) {
    int v0 = 63;
    int v1 = 67;
    int v2 = 92;
    int v3 = 26;
    int v4 = 53;
    int i;
    v3 = v3 * 4;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
