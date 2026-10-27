int test_func(void) {
    int v0 = 72;
    int v1 = 14;
    int v2 = 30;
    int v3 = 52;
    int v4 = 5;
    int v5 = 25;
    int v6 = 68;
    int i;
    if (v3 > v1) { v3 = v1; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
