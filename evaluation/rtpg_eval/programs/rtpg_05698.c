int test_func(void) {
    int v0 = 5;
    int v1 = 60;
    int v2 = 85;
    int v3 = 58;
    int i;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 - v1;
    v1 = v1 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
