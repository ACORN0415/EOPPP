int test_func(void) {
    int v0 = 10;
    int v1 = 22;
    int v2 = 98;
    int v3 = 80;
    int v4 = 59;
    int v5 = 5;
    int i;
    v5 = 38;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
