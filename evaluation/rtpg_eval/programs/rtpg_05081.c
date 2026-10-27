int test_func(void) {
    int v0 = 37;
    int v1 = 91;
    int v2 = 67;
    int v3 = 81;
    int v4 = 95;
    int v5 = 35;
    int v6 = 17;
    int v7 = 33;
    int i;
    if (v2 > v7) { v2 = v7; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
