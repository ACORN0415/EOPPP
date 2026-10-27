int test_func(void) {
    int v0 = 7;
    int v1 = 75;
    int v2 = 50;
    int v3 = 44;
    int v4 = 88;
    int v5 = 53;
    int v6 = 100;
    int v7 = 75;
    int i;
    v7 = v7 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
