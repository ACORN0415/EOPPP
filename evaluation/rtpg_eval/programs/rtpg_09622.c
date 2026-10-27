int test_func(void) {
    int v0 = 85;
    int v1 = 91;
    int v2 = 12;
    int v3 = 97;
    int v4 = 45;
    int v5 = 47;
    int v6 = 35;
    int v7 = 90;
    int i;
    if (v3 > v1) { v3 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
