int test_func(void) {
    int v0 = 33;
    int v1 = 27;
    int v2 = 50;
    int v3 = 15;
    int v4 = 20;
    int v5 = 96;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v5;
    }
    if (v3 > v2) { v3 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
