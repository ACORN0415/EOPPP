int __arr_678[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 22;
    int v2 = 1;
    int v3 = 5;
    int v4 = 65;
    int v5 = 62;
    int v6 = 67;
    int v7 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_678[i] = v0 + i; }
    v4 = v4 + v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
