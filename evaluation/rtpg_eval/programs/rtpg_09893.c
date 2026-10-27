int test_func(void) {
    int v0 = 86;
    int v1 = 79;
    int v2 = 79;
    int v3 = 46;
    int v4 = 67;
    int v5 = 19;
    int v6 = 55;
    int i;
    v6 = v6 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
