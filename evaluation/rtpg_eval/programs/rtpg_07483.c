int test_func(void) {
    int v0 = 28;
    int v1 = 0;
    int v2 = 95;
    int v3 = 40;
    int v4 = 18;
    int v5 = 35;
    int v6 = 76;
    int v7 = 24;
    int i;
    v4 = 73;
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
