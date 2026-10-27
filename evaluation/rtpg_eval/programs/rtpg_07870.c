int __arr_7870[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 34;
    int v2 = 20;
    int v3 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_7870[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
