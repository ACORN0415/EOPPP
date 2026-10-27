int test_func(void) {
    int v0 = 57;
    int v1 = 45;
    int v2 = 24;
    int v3 = 87;
    int v4 = 82;
    int v5 = 81;
    int v6 = 33;
    int i;
    v0 = 0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
