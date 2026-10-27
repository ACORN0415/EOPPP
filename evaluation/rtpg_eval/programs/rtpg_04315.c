int test_func(void) {
    int v0 = 62;
    int v1 = 39;
    int v2 = 55;
    int v3 = 43;
    int v4 = 45;
    int v5 = 16;
    int i;
    if (v4 > v1) { v4 = v1; }
    for (i = 0; i < 17; i++) {
        v5 = v5 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
