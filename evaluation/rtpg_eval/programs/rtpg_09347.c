int test_func(void) {
    int v0 = 93;
    int v1 = 26;
    int v2 = 66;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
