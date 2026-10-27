int test_func(void) {
    int v0 = 21;
    int v1 = 100;
    int v2 = 64;
    int v3 = 95;
    int i;
    v3 = 81;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v3 = v3 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
