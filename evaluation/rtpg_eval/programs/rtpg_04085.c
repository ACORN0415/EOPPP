int test_func(void) {
    int v0 = 76;
    int v1 = 45;
    int v2 = 2;
    int v3 = 53;
    int i;
    if (v1 > v1) { v1 = v1; }
    v3 = v3 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
