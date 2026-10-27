int test_func(void) {
    int v0 = 66;
    int v1 = 72;
    int v2 = 62;
    int v3 = 21;
    int v4 = 68;
    int i;
    v1 = v1 + v0;
    int *__p = &v4;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
