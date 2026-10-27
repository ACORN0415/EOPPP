int test_func(void) {
    int v0 = 11;
    int v1 = 2;
    int v2 = 24;
    int v3 = 7;
    int v4 = 55;
    int v5 = 82;
    int v6 = 22;
    int i;
    v0 = v0 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
