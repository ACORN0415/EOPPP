int test_func(void) {
    int v0 = 1;
    int v1 = 25;
    int v2 = 30;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
