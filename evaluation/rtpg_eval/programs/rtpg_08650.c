int test_func(void) {
    int v0 = 99;
    int v1 = 75;
    int v2 = 16;
    int v3 = 78;
    int v4 = 81;
    int v5 = 20;
    int v6 = 82;
    int i;
    v6 = 9;
    if (v5 > v1) { v5 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
