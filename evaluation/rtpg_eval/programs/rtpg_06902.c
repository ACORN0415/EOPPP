int test_func(void) {
    int v0 = 76;
    int v1 = 9;
    int v2 = 75;
    int v3 = 99;
    int v4 = 98;
    int v5 = 49;
    int v6 = 40;
    int v7 = 32;
    int i;
    v1 = 77;
    v5 = v5 * 2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
