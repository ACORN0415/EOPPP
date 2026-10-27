int test_func(void) {
    int v0 = 89;
    int v1 = 93;
    int v2 = 18;
    int v3 = 97;
    int v4 = 48;
    int v5 = 89;
    int v6 = 69;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
