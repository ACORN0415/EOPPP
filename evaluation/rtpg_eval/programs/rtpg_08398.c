int test_func(void) {
    int v0 = 93;
    int v1 = 95;
    int v2 = 48;
    int v3 = 69;
    int v4 = 89;
    int v5 = 16;
    int v6 = 92;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    v0 = 6;
    v3 = v3 - v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
