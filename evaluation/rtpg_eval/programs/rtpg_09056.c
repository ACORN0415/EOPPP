int __arr_9056[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 1;
    int v2 = 35;
    int v3 = 3;
    int v4 = 85;
    int v5 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_9056[i] = v3 + i; }
    v5 = v5 + v2;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
