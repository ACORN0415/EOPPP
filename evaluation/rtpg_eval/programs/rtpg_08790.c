int test_func(void) {
    int v0 = 61;
    int v1 = 76;
    int v2 = 0;
    int v3 = 35;
    int v4 = 92;
    int i;
    if (v2 > v4) { v2 = v4; }
    v2 = v2 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
