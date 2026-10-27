int test_func(void) {
    int v0 = 27;
    int v1 = 19;
    int v2 = 87;
    int v3 = 84;
    int v4 = 45;
    int v5 = 95;
    int v6 = 100;
    int v7 = 73;
    int i;
    v6 = v6 - v3;
    if (v5 > v4) { v5 = v4; }
    v2 = 65;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
