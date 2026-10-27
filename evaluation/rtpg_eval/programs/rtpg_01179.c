int test_func(void) {
    int v0 = 95;
    int v1 = 73;
    int v2 = 90;
    int v3 = 26;
    int v4 = 70;
    int v5 = 53;
    int v6 = 30;
    int i;
    v5 = v5 + v3;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
