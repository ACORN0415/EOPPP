int __arr_7883[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 94;
    int v2 = 27;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_7883[i] = v1 + i; }
    v0 = v0 * 4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
