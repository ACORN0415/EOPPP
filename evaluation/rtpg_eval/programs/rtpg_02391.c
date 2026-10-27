int test_func(void) {
    int v0 = 5;
    int v1 = 2;
    int v2 = 31;
    int v3 = 82;
    int v4 = 57;
    int v5 = 53;
    int i;
    if (v4 > v0) { v4 = v0; }
    v2 = 38;
    v4 = v4 - v5;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
