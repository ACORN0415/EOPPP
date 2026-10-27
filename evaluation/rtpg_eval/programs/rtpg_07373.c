int __arr_7373[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 5;
    int v2 = 33;
    int v3 = 24;
    int v4 = 52;
    int v5 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_7373[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
