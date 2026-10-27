int __arr_1097[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 13;
    int v2 = 96;
    int v3 = 45;
    int v4 = 28;
    int v5 = 82;
    int v6 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_1097[i] = v2 + i; }
    v6 = v6 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
