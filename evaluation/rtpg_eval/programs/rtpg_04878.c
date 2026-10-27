int test_func(void) {
    int v0 = 53;
    int v1 = 37;
    int v2 = 37;
    int v3 = 92;
    int v4 = 26;
    int v5 = 25;
    int v6 = 24;
    int v7 = 18;
    int i;
    if (v1 > v6) { v1 = v6; }
    for (i = 0; i < 9; i++) {
        v6 = v6 + v7;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
