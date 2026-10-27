int test_func(void) {
    int v0 = 55;
    int v1 = 96;
    int v2 = 0;
    int v3 = 85;
    int v4 = 15;
    int v5 = 43;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v3;
    }
    if (v2 > v2) { v2 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
