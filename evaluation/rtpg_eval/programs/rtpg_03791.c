int __arr_3791[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 65;
    int v2 = 79;
    int v3 = 77;
    int v4 = 3;
    int v5 = 7;
    int v6 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_3791[i] = v1 + i; }
    int *__p = &v6;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
