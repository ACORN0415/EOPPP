int test_func(void) {
    int v0 = 91;
    int v1 = 6;
    int v2 = 80;
    int v3 = 67;
    int v4 = 69;
    int v5 = 77;
    int i;
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
