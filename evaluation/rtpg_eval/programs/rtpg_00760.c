int __arr_760[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 53;
    int v2 = 30;
    int v3 = 41;
    int v4 = 18;
    int v5 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_760[i] = v5 + i; }
    v3 = v3 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
