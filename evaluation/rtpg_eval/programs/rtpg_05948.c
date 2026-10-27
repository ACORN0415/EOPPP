int test_func(void) {
    int v0 = 80;
    int v1 = 92;
    int v2 = 22;
    int v3 = 77;
    int v4 = 80;
    int v5 = 10;
    int v6 = 19;
    int v7 = 81;
    int i;
    v7 = v7 * 9;
    if (v6 > v0) { v6 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
