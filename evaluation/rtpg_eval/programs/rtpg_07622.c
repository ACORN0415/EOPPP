int test_func(void) {
    int v0 = 77;
    int v1 = 79;
    int v2 = 79;
    int v3 = 30;
    int v4 = 83;
    int v5 = 99;
    int v6 = 67;
    int i;
    v1 = v1 + v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
