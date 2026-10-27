int test_func(void) {
    int v0 = 97;
    int v1 = 17;
    int v2 = 58;
    int v3 = 6;
    int v4 = 25;
    int v5 = 15;
    int i;
    v5 = v5 + v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v1 = v1 | v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
