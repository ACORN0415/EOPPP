int test_func(void) {
    int v0 = 42;
    int v1 = 46;
    int v2 = 34;
    int v3 = 49;
    int v4 = 72;
    int v5 = 33;
    int v6 = 50;
    int i;
    v5 = v5 + v1;
    v5 = v5 - v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
