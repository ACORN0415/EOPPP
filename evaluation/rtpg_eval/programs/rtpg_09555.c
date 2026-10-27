int test_func(void) {
    int v0 = 81;
    int v1 = 81;
    int v2 = 87;
    int v3 = 61;
    int i;
    v3 = 9;
    v1 = v1 * 2;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
