int test_func(void) {
    int v0 = 91;
    int v1 = 63;
    int v2 = 74;
    int v3 = 10;
    int v4 = 68;
    int v5 = 2;
    int v6 = 8;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v6;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
