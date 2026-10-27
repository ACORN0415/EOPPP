int test_func(void) {
    int v0 = 53;
    int v1 = 43;
    int v2 = 5;
    int v3 = 6;
    int v4 = 43;
    int v5 = 69;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
