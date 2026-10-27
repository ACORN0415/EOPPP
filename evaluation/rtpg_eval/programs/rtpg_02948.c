int test_func(void) {
    int v0 = 44;
    int v1 = 38;
    int v2 = 98;
    int v3 = 71;
    int v4 = 33;
    int v5 = 49;
    int v6 = 78;
    int v7 = 26;
    int i;
    v6 = v6 - v3;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v5;
    }
    v0 = v0 % (v6 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
