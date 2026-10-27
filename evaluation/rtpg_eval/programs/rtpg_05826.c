int test_func(void) {
    int v0 = 98;
    int v1 = 82;
    int v2 = 17;
    int v3 = 22;
    int v4 = 70;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
