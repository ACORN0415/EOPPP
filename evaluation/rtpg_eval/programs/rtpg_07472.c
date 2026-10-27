int test_func(void) {
    int v0 = 1;
    int v1 = 40;
    int v2 = 31;
    int v3 = 39;
    int v4 = 44;
    int i;
    v4 = v4 + v0;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 17; i++) {
        v4 = v4 + v1;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
