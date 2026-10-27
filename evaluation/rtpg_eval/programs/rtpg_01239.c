int test_func(void) {
    int v0 = 74;
    int v1 = 11;
    int v2 = 15;
    int v3 = 88;
    int v4 = 25;
    int v5 = 21;
    int i;
    if (v0 > v3) { v0 = v3; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
