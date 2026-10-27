int test_func(void) {
    int v0 = 84;
    int v1 = 98;
    int v2 = 98;
    int v3 = 94;
    int v4 = 54;
    int v5 = 49;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 17; i++) {
        v5 = v5 + v3;
    }
    v5 = v5 % (v4 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
