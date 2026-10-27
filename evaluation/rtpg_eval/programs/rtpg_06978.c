int test_func(void) {
    int v0 = 86;
    int v1 = 94;
    int v2 = 21;
    int v3 = 63;
    int v4 = 73;
    int v5 = 100;
    int i;
    v2 = v2 * 10;
    v3 = 13;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
