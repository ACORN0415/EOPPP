int test_func(void) {
    int v0 = 66;
    int v1 = 69;
    int v2 = 53;
    int v3 = 91;
    int i;
    if (v3 > v2) { v3 = v2; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = v3 & v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
