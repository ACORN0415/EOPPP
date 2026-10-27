int __arr_7547[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 67;
    int v2 = 91;
    int v3 = 37;
    int v4 = 8;
    int v5 = 84;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_7547[i] = v0 + i; }
    v5 = v5 * 8;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
