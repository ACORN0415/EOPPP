int __arr_8121[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 68;
    int v2 = 67;
    int v3 = 23;
    int v4 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_8121[i] = v1 + i; }
    v4 = v4 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
