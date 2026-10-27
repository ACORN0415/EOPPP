int __arr_8866[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 58;
    int v2 = 97;
    int v3 = 69;
    int v4 = 25;
    int v5 = 79;
    int v6 = 71;
    int v7 = 24;
    int i;
    v5 = v5 + v1;
    for (i = 0; i < 10; i++) { __arr_8866[i] = v5 + i; }
    int *__p = &v6;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
