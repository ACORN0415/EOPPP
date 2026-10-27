int test_func(void) {
    int v0 = 47;
    int v1 = 95;
    int v2 = 31;
    int v3 = 0;
    int v4 = 2;
    int i;
    if (v4 > v4) { v4 = v4; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
