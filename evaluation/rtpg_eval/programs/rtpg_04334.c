int test_func(void) {
    int v0 = 61;
    int v1 = 92;
    int v2 = 24;
    int v3 = 99;
    int v4 = 4;
    int v5 = 81;
    int i;
    v1 = v1 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
