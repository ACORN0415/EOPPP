int __arr_3676[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 72;
    int v2 = 76;
    int v3 = 56;
    int v4 = 94;
    int v5 = 53;
    int v6 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_3676[i] = v4 + i; }
    for (i = 0; i < 11; i++) {
        v6 = v6 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
