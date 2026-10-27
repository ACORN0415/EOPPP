int __arr_9942[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 33;
    int v2 = 27;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_9942[i] = v1 + i; }
    if (v1 > v2) { v1 = v2; }
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
