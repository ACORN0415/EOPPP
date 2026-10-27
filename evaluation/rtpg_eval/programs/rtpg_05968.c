int test_func(void) {
    int v0 = 73;
    int v1 = 48;
    int v2 = 55;
    int i;
    v0 = 48;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
