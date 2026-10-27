int test_func(void) {
    int v0 = 96;
    int v1 = 28;
    int v2 = 27;
    int v3 = 30;
    int v4 = 22;
    int v5 = 68;
    int v6 = 46;
    int i;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v6;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
