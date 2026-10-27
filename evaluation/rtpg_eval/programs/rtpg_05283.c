int __arr_5283[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 1;
    int v2 = 39;
    int v3 = 29;
    int v4 = 59;
    int v5 = 53;
    int v6 = 19;
    int v7 = 45;
    int i;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5283[i] = v1 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
