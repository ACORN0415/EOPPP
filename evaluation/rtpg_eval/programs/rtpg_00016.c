int test_func(void) {
    int v0 = 22;
    int v1 = 100;
    int v2 = 34;
    int v3 = 96;
    int v4 = 48;
    int v5 = 46;
    int v6 = 81;
    int i;
    v4 = 22;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
