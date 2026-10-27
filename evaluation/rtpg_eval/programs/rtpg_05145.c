int __arr_5145[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 39;
    int v2 = 28;
    int v3 = 19;
    int v4 = 77;
    int v5 = 58;
    int v6 = 61;
    int i;
    for (i = 0; i < 10; i++) { __arr_5145[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
