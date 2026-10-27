int __arr_5415[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 46;
    int v2 = 0;
    int v3 = 74;
    int v4 = 77;
    int v5 = 49;
    int v6 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_5415[i] = v0 + i; }
    v0 = v0 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
