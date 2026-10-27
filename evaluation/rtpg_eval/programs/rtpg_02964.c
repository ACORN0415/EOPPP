int __arr_2964[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 49;
    int v2 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_2964[i] = v1 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
