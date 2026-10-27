int test_func(void) {
    int v0 = 83;
    int v1 = 85;
    int v2 = 86;
    int i;
    v0 = v0 + v0;
    v0 = 64;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
