int test_func(void) {
    int v0 = 37;
    int v1 = 96;
    int v2 = 39;
    int v3 = 93;
    int v4 = 37;
    int i;
    if (v1 > v3) { v1 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
