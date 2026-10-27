int test_func(void) {
    int v0 = 51;
    int v1 = 69;
    int v2 = 88;
    int v3 = 2;
    int v4 = 6;
    int v5 = 44;
    int v6 = 18;
    int i;
    v2 = v2 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__p = &v4;
    *__p = *__p + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
