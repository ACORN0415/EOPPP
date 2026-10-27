int test_func(void) {
    int v0 = 3;
    int v1 = 60;
    int v2 = 27;
    int v3 = 0;
    int v4 = 89;
    int v5 = 80;
    int i;
    v4 = v4 - v2;
    v0 = v0 + v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
