int test_func(void) {
    int v0 = 7;
    int v1 = 48;
    int v2 = 23;
    int v3 = 89;
    int v4 = 68;
    int v5 = 97;
    int v6 = 94;
    int i;
    v3 = v3 + v6;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    v5 = v5 / (v4 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
