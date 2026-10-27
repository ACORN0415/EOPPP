int test_func(void) {
    int v0 = 60;
    int v1 = 93;
    int v2 = 32;
    int v3 = 79;
    int v4 = 12;
    int v5 = 66;
    int v6 = 63;
    int v7 = 87;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v6;
    }
    v2 = v2 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
