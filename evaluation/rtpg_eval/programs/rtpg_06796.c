int __arr_6796[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 68;
    int v2 = 13;
    int v3 = 83;
    int v4 = 21;
    int i;
    v1 = v1 * 9;
    v1 = v1 - v4;
    for (i = 0; i < 10; i++) { __arr_6796[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
