int test_func(void) {
    int v0 = 31;
    int v1 = 89;
    int v2 = 74;
    int v3 = 3;
    int v4 = 44;
    int i;
    v4 = v4 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
