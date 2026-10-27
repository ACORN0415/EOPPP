int test_func(void) {
    int v0 = 40;
    int v1 = 87;
    int v2 = 62;
    int v3 = 8;
    int v4 = 25;
    int v5 = 70;
    int v6 = 67;
    int v7 = 46;
    int i;
    v3 = 54;
    v5 = v5 + v5;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
