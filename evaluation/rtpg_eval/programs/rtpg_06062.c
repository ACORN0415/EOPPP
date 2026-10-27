int test_func(void) {
    int v0 = 74;
    int v1 = 75;
    int v2 = 50;
    int v3 = 93;
    int v4 = 66;
    int v5 = 39;
    int v6 = 34;
    int i;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 * 6;
    v4 = v4 & v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
