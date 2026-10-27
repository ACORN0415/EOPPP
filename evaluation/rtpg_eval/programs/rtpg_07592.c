int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 23;
    int v2 = 97;
    int i;
    v0 = v0 - v1;
    v1 = v1 * 7;
    v1 = 9;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
