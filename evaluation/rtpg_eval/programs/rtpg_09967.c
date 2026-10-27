int __arr_9967[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 93;
    int v2 = 70;
    int v3 = 6;
    int v4 = 100;
    int v5 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_9967[i] = v1 + i; }
    v2 = 78;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
