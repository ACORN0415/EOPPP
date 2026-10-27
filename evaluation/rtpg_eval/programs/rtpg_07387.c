int __arr_7387[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 97;
    int v2 = 10;
    int v3 = 91;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_7387[i] = v3 + i; }
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
