int test_func(void) {
    int v0 = 67;
    int v1 = 17;
    int v2 = 73;
    int v3 = 97;
    int v4 = 81;
    int v5 = 95;
    int v6 = 84;
    int v7 = 80;
    int i;
    if (v3 > v0) { v3 = v0; }
    v5 = v5 - v4;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    v6 = v6 | v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
