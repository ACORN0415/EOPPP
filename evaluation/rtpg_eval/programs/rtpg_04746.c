int test_func(void) {
    int v0 = 18;
    int v1 = 85;
    int v2 = 6;
    int v3 = 1;
    int v4 = 95;
    int v5 = 86;
    int i;
    v0 = v0 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
