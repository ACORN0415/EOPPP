int test_func(void) {
    int v0 = 89;
    int v1 = 68;
    int v2 = 37;
    int v3 = 46;
    int i;
    v2 = 2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v2 = v2 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
