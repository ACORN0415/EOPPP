int test_func(void) {
    int v0 = 94;
    int v1 = 95;
    int v2 = 77;
    int v3 = 73;
    int v4 = 79;
    int v5 = 100;
    int i;
    if (v0 > v5) { v0 = v5; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
