int test_func(void) {
    int v0 = 40;
    int v1 = 15;
    int v2 = 57;
    int v3 = 52;
    int v4 = 21;
    int v5 = 69;
    int v6 = 24;
    int v7 = 50;
    int i;
    if (v2 > v0) { v2 = v0; }
    v6 = v6 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
