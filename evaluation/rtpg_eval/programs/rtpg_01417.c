int test_func(void) {
    int v0 = 22;
    int v1 = 58;
    int v2 = 51;
    int v3 = 96;
    int v4 = 37;
    int v5 = 27;
    int i;
    v2 = v2 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v5 = v5 & v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
