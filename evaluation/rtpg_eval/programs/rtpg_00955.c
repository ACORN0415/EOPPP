int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 99;
    int v2 = 59;
    int v3 = 38;
    int v4 = 44;
    int v5 = 78;
    int v6 = 84;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v3;
    }
    v0 = v0 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
