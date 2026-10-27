int test_func(void) {
    int v0 = 97;
    int v1 = 10;
    int v2 = 1;
    int i;
    v0 = 33;
    v0 = v0 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
