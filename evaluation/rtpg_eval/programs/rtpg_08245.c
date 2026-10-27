int __arr_8245[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 1;
    int v2 = 54;
    int v3 = 57;
    int v4 = 54;
    int v5 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_8245[i] = v3 + i; }
    if (v1 > v1) { v1 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
