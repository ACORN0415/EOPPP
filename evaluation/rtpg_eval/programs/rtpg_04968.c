int test_func(void) {
    int v0 = 96;
    int v1 = 89;
    int v2 = 65;
    int v3 = 44;
    int v4 = 49;
    int v5 = 5;
    int i;
    if (v3 > v3) { v3 = v3; }
    v4 = v4 * 3;
    v5 = v5 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v2 = v2 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
