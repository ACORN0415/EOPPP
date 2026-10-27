int __arr_8988[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 78;
    int v2 = 38;
    int v3 = 9;
    int v4 = 60;
    int v5 = 68;
    int i;
    for (i = 0; i < 10; i++) { __arr_8988[i] = v2 + i; }
    v4 = v4 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
