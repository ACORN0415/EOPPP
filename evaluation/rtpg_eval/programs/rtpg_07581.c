int test_func(void) {
    int v0 = 39;
    int v1 = 53;
    int v2 = 85;
    int v3 = 8;
    int i;
    v0 = v0 + v3;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    v3 = 30;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = v3 & v1;
    return v0;
}
int main(void) { return test_func(); }
