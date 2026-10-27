int __arr_600[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 38;
    int v2 = 71;
    int v3 = 32;
    int v4 = 83;
    int v5 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_600[i] = v4 + i; }
    for (i = 0; i < 18; i++) {
        v3 = v3 + v2;
    }
    v5 = v5 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    v2 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
