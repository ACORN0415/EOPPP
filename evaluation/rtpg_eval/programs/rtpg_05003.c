int test_func(void) {
    int v0 = 66;
    int v1 = 10;
    int v2 = 53;
    int v3 = 68;
    int v4 = 61;
    int v5 = 53;
    int v6 = 90;
    int v7 = 49;
    int i;
    for (i = 0; i < 5; i++) {
        v7 = v7 + v6;
    }
    if (v7 > v7) { v7 = v7; }
    v6 = v6 ^ v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
