int test_func(void) {
    int v0 = 47;
    int v1 = 4;
    int v2 = 94;
    int v3 = 70;
    int v4 = 58;
    int v5 = 29;
    int v6 = 96;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v1;
    }
    v2 = 69;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
