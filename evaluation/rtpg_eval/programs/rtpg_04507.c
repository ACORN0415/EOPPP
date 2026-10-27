int test_func(void) {
    int v0 = 69;
    int v1 = 93;
    int v2 = 81;
    int v3 = 65;
    int v4 = 10;
    int v5 = 81;
    int v6 = 83;
    int v7 = 20;
    int i;
    v0 = v0 - v6;
    v3 = v3 + v4;
    v0 = 90;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
