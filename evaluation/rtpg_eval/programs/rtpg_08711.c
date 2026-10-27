int test_func(void) {
    int v0 = 92;
    int v1 = 73;
    int v2 = 4;
    int v3 = 11;
    int v4 = 21;
    int v5 = 89;
    int i;
    v5 = v5 - v1;
    v4 = 66;
    v5 = v5 ^ v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
