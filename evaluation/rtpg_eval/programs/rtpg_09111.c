int __arr_9111[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 83;
    int v2 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_9111[i] = v1 + i; }
    for (i = 0; i < 18; i++) {
        v0 = v0 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
