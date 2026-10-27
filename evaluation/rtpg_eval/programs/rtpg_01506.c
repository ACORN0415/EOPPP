int test_func(void) {
    int v0 = 13;
    int v1 = 2;
    int v2 = 34;
    int v3 = 46;
    int v4 = 90;
    int v5 = 45;
    int v6 = 10;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v5;
    }
    v6 = v6 + v4;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
