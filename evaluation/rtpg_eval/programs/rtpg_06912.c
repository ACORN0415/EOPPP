int test_func(void) {
    int v0 = 66;
    int v1 = 80;
    int v2 = 49;
    int v3 = 67;
    int v4 = 76;
    int v5 = 3;
    int i;
    v1 = v1 + v1;
    if (v1 > v4) { v1 = v4; }
    v3 = 94;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v0 = v0 | v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
