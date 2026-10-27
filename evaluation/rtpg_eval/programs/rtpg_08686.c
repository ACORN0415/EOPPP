int test_func(void) {
    int v0 = 75;
    int v1 = 22;
    int v2 = 79;
    int v3 = 82;
    int v4 = 76;
    int v5 = 97;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
