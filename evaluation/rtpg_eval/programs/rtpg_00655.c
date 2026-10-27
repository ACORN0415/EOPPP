int test_func(void) {
    int v0 = 29;
    int v1 = 14;
    int v2 = 80;
    int v3 = 4;
    int v4 = 19;
    int v5 = 44;
    int v6 = 77;
    int i;
    v0 = 70;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
