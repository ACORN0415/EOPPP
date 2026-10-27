int test_func(void) {
    int v0 = 20;
    int v1 = 81;
    int v2 = 4;
    int v3 = 17;
    int v4 = 93;
    int v5 = 41;
    int v6 = 65;
    int i;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v6;
    }
    if (v1 > v0) { v1 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
