int __arr_1624[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 81;
    int v2 = 79;
    int v3 = 83;
    int v4 = 98;
    int v5 = 15;
    int v6 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_1624[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
