int test_func(void) {
    int v0 = 31;
    int v1 = 78;
    int v2 = 89;
    int v3 = 35;
    int v4 = 31;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
