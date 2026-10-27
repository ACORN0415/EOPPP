int test_func(void) {
    int v0 = 11;
    int v1 = 4;
    int v2 = 25;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
