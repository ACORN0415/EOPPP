int __arr_5190[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 62;
    int v2 = 13;
    int v3 = 66;
    int v4 = 14;
    int v5 = 99;
    int v6 = 85;
    int v7 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_5190[i] = v5 + i; }
    for (i = 0; i < 12; i++) {
        v6 = v6 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
