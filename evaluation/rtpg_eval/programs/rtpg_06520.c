int test_func(void) {
    int v0 = 9;
    int v1 = 1;
    int v2 = 17;
    int v3 = 88;
    int v4 = 49;
    int v5 = 97;
    int v6 = 11;
    int v7 = 51;
    int i;
    if (v4 > v6) { v4 = v6; }
    v4 = v4 + v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
