int test_func(void) {
    int v0 = 20;
    int v1 = 94;
    int v2 = 70;
    int v3 = 8;
    int v4 = 22;
    int v5 = 47;
    int v6 = 100;
    int i;
    v2 = 48;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
