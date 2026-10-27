int __arr_765[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 83;
    int v2 = 64;
    int v3 = 23;
    int v4 = 57;
    int v5 = 2;
    int v6 = 65;
    int i;
    v4 = v4 * 10;
    for (i = 0; i < 10; i++) { __arr_765[i] = v5 + i; }
    v5 = v5 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
