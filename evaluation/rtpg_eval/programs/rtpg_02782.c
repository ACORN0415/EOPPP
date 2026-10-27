int test_func(void) {
    int v0 = 50;
    int v1 = 96;
    int v2 = 5;
    int v3 = 94;
    int v4 = 85;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v3;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
