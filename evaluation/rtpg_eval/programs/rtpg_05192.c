int __arr_5192[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 100;
    int v2 = 60;
    int v3 = 100;
    int v4 = 13;
    int v5 = 45;
    int v6 = 5;
    int v7 = 3;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v3;
    }
    v4 = v4 + v6;
    for (i = 0; i < 10; i++) { __arr_5192[i] = v6 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
