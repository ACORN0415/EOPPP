int test_func(void) {
    int v0 = 92;
    int v1 = 81;
    int v2 = 38;
    int v3 = 10;
    int v4 = 81;
    int v5 = 11;
    int v6 = 26;
    int v7 = 14;
    int i;
    v2 = v2 + v0;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 16; i++) {
        v1 = v1 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
