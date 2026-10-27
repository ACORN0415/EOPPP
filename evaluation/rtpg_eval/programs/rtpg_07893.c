int test_func(void) {
    int v0 = 32;
    int v1 = 1;
    int v2 = 51;
    int v3 = 29;
    int v4 = 58;
    int i;
    v1 = v1 * 2;
    v3 = v3 + v2;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
