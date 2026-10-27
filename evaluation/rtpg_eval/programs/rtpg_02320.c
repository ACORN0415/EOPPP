int test_func(void) {
    int v0 = 62;
    int v1 = 22;
    int v2 = 59;
    int v3 = 22;
    int v4 = 87;
    int v5 = 59;
    int v6 = 44;
    int i;
    if (v4 > v6) { v4 = v6; }
    v6 = v6 & v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
