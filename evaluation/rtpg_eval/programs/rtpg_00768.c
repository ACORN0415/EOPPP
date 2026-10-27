int test_func(void) {
    int v0 = 80;
    int v1 = 37;
    int v2 = 7;
    int v3 = 86;
    int v4 = 33;
    int v5 = 33;
    int v6 = 24;
    int i;
    v5 = 44;
    if (v5 > v2) { v5 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
