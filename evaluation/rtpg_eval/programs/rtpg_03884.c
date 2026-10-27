int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 45;
    int v2 = 51;
    int v3 = 16;
    int v4 = 84;
    int v5 = 95;
    int i;
    if (v4 > v0) { v4 = v0; }
    v5 = 94;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
