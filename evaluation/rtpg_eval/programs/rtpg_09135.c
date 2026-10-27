int test_func(void) {
    int v0 = 12;
    int v1 = 28;
    int v2 = 53;
    int i;
    v2 = v2 + v1;
    v1 = v1 * 3;
    if (v2 > v0) { v2 = v0; }
    int *__p = &v1;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
