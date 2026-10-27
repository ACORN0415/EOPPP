int test_func(void) {
    int v0 = 21;
    int v1 = 14;
    int v2 = 84;
    int v3 = 10;
    int v4 = 40;
    int v5 = 66;
    int i;
    v3 = v3 - v5;
    v5 = v5 & v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
