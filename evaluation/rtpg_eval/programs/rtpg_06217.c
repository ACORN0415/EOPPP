int test_func(void) {
    int v0 = 32;
    int v1 = 94;
    int v2 = 93;
    int v3 = 21;
    int v4 = 86;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
