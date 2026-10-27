int test_func(void) {
    int v0 = 65;
    int v1 = 81;
    int v2 = 46;
    int v3 = 24;
    int v4 = 50;
    int v5 = 79;
    int v6 = 35;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v4 = v4 + v4;
    v3 = v3 * 3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
