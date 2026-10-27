int test_func(void) {
    int v0 = 79;
    int v1 = 8;
    int v2 = 23;
    int v3 = 58;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v2;
    }
    if (v0 > v3) { v0 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
