int test_func(void) {
    int v0 = 16;
    int v1 = 62;
    int v2 = 65;
    int v3 = 74;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    if (v2 > v0) { v2 = v0; }
    v2 = 49;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
