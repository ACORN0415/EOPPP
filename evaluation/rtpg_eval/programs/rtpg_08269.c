int test_func(void) {
    int v0 = 82;
    int v1 = 18;
    int v2 = 57;
    int v3 = 78;
    int v4 = 86;
    int v5 = 46;
    int i;
    v2 = v2 - v3;
    v2 = 99;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
