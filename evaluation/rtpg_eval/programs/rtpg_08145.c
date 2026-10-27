int test_func(void) {
    int v0 = 79;
    int v1 = 82;
    int v2 = 85;
    int v3 = 61;
    int v4 = 60;
    int v5 = 70;
    int v6 = 65;
    int v7 = 89;
    int i;
    v1 = v1 * 6;
    v1 = v1 + v1;
    for (i = 0; i < 17; i++) {
        v7 = v7 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v7 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
