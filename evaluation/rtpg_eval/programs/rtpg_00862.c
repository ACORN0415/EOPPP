int test_func(void) {
    int v0 = 37;
    int v1 = 15;
    int v2 = 95;
    int v3 = 89;
    int v4 = 40;
    int i;
    v0 = 35;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
