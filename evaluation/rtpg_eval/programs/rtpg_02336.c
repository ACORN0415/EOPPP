int test_func(void) {
    int v0 = 46;
    int v1 = 59;
    int v2 = 78;
    int v3 = 28;
    int v4 = 77;
    int v5 = 2;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v4;
    }
    v5 = v5 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
