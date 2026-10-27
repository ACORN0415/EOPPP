int test_func(void) {
    int v0 = 7;
    int v1 = 23;
    int v2 = 38;
    int v3 = 51;
    int v4 = 76;
    int v5 = 15;
    int v6 = 49;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v6;
    }
    v0 = v0 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
