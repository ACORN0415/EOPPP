int __arr_2297[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 35;
    int v2 = 88;
    int v3 = 46;
    int v4 = 73;
    int i;
    v0 = v0 * 2;
    v4 = 73;
    for (i = 0; i < 10; i++) { __arr_2297[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
