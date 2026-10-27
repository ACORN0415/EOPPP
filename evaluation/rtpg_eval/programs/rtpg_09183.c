int test_func(void) {
    int v0 = 57;
    int v1 = 43;
    int v2 = 15;
    int v3 = 20;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v0;
    }
    if (v2 > v3) { v2 = v3; }
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
