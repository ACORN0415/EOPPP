int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 24;
    int v2 = 34;
    int v3 = 4;
    int v4 = 7;
    int v5 = 31;
    int v6 = 73;
    int v7 = 79;
    int i;
    v6 = v6 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
