int __arr_5581[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 70;
    int v2 = 8;
    int v3 = 48;
    int v4 = 81;
    int v5 = 37;
    int v6 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_5581[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v4 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
