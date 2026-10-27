int test_func(void) {
    int v0 = 45;
    int v1 = 38;
    int v2 = 98;
    int v3 = 27;
    int v4 = 22;
    int v5 = 85;
    int i;
    v5 = v5 + v4;
    v0 = 0;
    v5 = v5 % (v0 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
