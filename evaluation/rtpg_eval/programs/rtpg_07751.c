int test_func(void) {
    int v0 = 29;
    int v1 = 81;
    int v2 = 11;
    int i;
    v0 = v0 - v1;
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = v0 / (v1 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
