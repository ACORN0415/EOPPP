int test_func(void) {
    int v0 = 16;
    int v1 = 70;
    int v2 = 5;
    int v3 = 31;
    int v4 = 48;
    int v5 = 92;
    int i;
    v3 = v3 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
