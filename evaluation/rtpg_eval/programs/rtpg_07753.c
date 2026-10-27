int test_func(void) {
    int v0 = 24;
    int v1 = 57;
    int v2 = 59;
    int v3 = 29;
    int v4 = 0;
    int v5 = 16;
    int i;
    v4 = v4 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
