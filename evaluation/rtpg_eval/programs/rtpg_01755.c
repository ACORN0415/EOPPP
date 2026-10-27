int __arr_1755[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 86;
    int v2 = 5;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_1755[i] = v0 + i; }
    v2 = v2 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
