int test_func(void) {
    int v0 = 79;
    int v1 = 98;
    int v2 = 26;
    int v3 = 82;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
