int test_func(void) {
    int v0 = 53;
    int v1 = 24;
    int v2 = 61;
    int v3 = 40;
    int v4 = 78;
    int v5 = 27;
    int i;
    v3 = v3 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
