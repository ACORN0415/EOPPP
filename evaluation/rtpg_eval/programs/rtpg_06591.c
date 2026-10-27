int __arr_6591[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 50;
    int v2 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_6591[i] = v0 + i; }
    v0 = v0 + v0;
    if (v0 > v0) { v0 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
