int __arr_6585[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 70;
    int v2 = 71;
    int v3 = 86;
    int v4 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_6585[i] = v0 + i; }
    v2 = v2 - v0;
    v1 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
