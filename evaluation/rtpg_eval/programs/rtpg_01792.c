int __arr_1792[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 41;
    int v2 = 64;
    int v3 = 92;
    int v4 = 72;
    int v5 = 89;
    int v6 = 15;
    int v7 = 38;
    int i;
    v4 = v4 - v3;
    v1 = v1 * 8;
    for (i = 0; i < 10; i++) { __arr_1792[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
