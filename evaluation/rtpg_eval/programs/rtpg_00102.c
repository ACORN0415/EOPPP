int __arr_102[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 28;
    int v2 = 31;
    int v3 = 80;
    int v4 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_102[i] = v0 + i; }
    if (v3 > v4) { v3 = v4; }
    v2 = v2 * 9;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
