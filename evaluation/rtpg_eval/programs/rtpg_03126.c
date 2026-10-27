int __arr_3126[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 98;
    int v2 = 21;
    int v3 = 44;
    int v4 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_3126[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
