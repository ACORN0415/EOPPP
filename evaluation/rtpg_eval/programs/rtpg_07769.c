int test_func(void) {
    int v0 = 64;
    int v1 = 31;
    int v2 = 84;
    int v3 = 67;
    int v4 = 49;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
