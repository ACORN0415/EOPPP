int test_func(void) {
    int v0 = 81;
    int v1 = 18;
    int v2 = 19;
    int v3 = 40;
    int v4 = 79;
    int v5 = 80;
    int v6 = 77;
    int i;
    if (v0 > v2) { v0 = v2; }
    v0 = 36;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
