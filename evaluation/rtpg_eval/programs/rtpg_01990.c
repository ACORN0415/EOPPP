int test_func(void) {
    int v0 = 54;
    int v1 = 68;
    int v2 = 62;
    int v3 = 59;
    int v4 = 58;
    int i;
    v0 = v0 * 9;
    v4 = 36;
    v1 = v1 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
