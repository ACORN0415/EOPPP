int __arr_9052[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 21;
    int v2 = 40;
    int i;
    for (i = 0; i < 10; i++) { __arr_9052[i] = v1 + i; }
    v0 = v0 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v2 = v2 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
