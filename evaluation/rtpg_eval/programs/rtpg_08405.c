int test_func(void) {
    int v0 = 20;
    int v1 = 60;
    int v2 = 70;
    int v3 = 18;
    int i;
    if (v3 > v3) { v3 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
