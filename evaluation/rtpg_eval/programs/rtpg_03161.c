int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 26;
    int v2 = 41;
    int v3 = 59;
    int v4 = 73;
    int v5 = 99;
    int v6 = 23;
    int v7 = 82;
    int i;
    v2 = v2 - v7;
    if (v4 > v2) { v4 = v2; }
    v0 = __arr_didx[__idx_didx[0]];
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
