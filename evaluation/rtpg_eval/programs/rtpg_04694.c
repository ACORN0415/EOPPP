int test_func(void) {
    int v0 = 3;
    int v1 = 39;
    int v2 = 69;
    int v3 = 23;
    int v4 = 40;
    int v5 = 86;
    int i;
    if (v3 > v0) { v3 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
