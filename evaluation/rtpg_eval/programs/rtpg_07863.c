int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 19;
    int v2 = 7;
    int v3 = 89;
    int v4 = 18;
    int v5 = 12;
    int v6 = 27;
    int v7 = 24;
    int i;
    v6 = 85;
    v6 = v6 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v4 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
