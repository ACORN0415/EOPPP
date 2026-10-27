int test_func(void) {
    int v0 = 78;
    int v1 = 18;
    int v2 = 28;
    int v3 = 71;
    int v4 = 70;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v1;
    }
    v1 = 48;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
