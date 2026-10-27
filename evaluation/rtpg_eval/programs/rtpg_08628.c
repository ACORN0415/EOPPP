int test_func(void) {
    int v0 = 58;
    int v1 = 39;
    int v2 = 77;
    int v3 = 41;
    int v4 = 81;
    int v5 = 78;
    int v6 = 85;
    int v7 = 97;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v5;
    }
    v1 = v1 * 6;
    if (v6 > v6) { v6 = v6; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
