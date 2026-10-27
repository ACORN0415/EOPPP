int test_func(void) {
    int v0 = 10;
    int v1 = 3;
    int v2 = 92;
    int v3 = 32;
    int v4 = 70;
    int v5 = 86;
    int v6 = 98;
    int v7 = 97;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 - v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    v3 = v3 | v2;
    return v0;
}
int main(void) { return test_func(); }
