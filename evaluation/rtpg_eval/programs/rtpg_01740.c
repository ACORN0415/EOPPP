int test_func(void) {
    int v0 = 26;
    int v1 = 50;
    int v2 = 56;
    int v3 = 82;
    int i;
    if (v3 > v2) { v3 = v2; }
    v0 = 10;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
