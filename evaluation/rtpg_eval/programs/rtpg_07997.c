int test_func(void) {
    int v0 = 48;
    int v1 = 0;
    int v2 = 37;
    int v3 = 18;
    int v4 = 98;
    int i;
    if (v4 > v3) { v4 = v3; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
