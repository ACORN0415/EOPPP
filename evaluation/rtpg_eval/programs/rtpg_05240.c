int __arr_5240[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 49;
    int v2 = 25;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 * 7;
    for (i = 0; i < 10; i++) { __arr_5240[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
