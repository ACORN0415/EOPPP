int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 70;
    int v2 = 29;
    int v3 = 35;
    int v4 = 62;
    int i;
    v1 = 78;
    v4 = v4 - v2;
    if (v1 > v2) { v1 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
