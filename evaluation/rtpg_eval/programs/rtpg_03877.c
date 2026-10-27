int __arr_3877[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 36;
    int v2 = 3;
    int v3 = 90;
    int v4 = 92;
    int i;
    v4 = v4 * 5;
    for (i = 0; i < 10; i++) { __arr_3877[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
