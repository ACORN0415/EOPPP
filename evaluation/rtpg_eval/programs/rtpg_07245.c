int __arr_7245[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 46;
    int v2 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_7245[i] = v0 + i; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
