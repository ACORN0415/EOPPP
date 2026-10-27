int test_func(void) {
    int v0 = 23;
    int v1 = 55;
    int v2 = 18;
    int v3 = 32;
    int v4 = 11;
    int v5 = 57;
    int v6 = 61;
    int v7 = 14;
    int i;
    for (i = 0; i < 12; i++) {
        v5 = v5 + v2;
    }
    v6 = v6 + v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
