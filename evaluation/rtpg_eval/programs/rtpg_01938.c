int test_func(void) {
    int v0 = 96;
    int v1 = 44;
    int v2 = 22;
    int v3 = 95;
    int v4 = 26;
    int v5 = 42;
    int v6 = 90;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
