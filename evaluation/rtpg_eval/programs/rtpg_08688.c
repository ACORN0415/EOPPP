int test_func(void) {
    int v0 = 60;
    int v1 = 38;
    int v2 = 68;
    int v3 = 59;
    int v4 = 51;
    int v5 = 12;
    int v6 = 12;
    int v7 = 83;
    int i;
    v2 = v2 - v7;
    if (v2 > v6) { v2 = v6; }
    v6 = v6 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
