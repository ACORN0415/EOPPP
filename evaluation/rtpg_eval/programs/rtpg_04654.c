int test_func(void) {
    int v0 = 68;
    int v1 = 98;
    int v2 = 88;
    int v3 = 33;
    int v4 = 22;
    int v5 = 24;
    int v6 = 50;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v4;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
