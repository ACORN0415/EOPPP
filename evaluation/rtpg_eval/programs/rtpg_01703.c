int __arr_1703[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 67;
    int v2 = 17;
    int v3 = 35;
    int v4 = 20;
    int v5 = 34;
    int v6 = 100;
    int v7 = 43;
    int i;
    v7 = v7 * 6;
    for (i = 0; i < 10; i++) { __arr_1703[i] = v7 + i; }
    if (v0 > v2) { v0 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
