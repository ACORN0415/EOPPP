int __arr_921[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 21;
    int v2 = 84;
    int v3 = 59;
    int v4 = 46;
    int v5 = 15;
    int v6 = 27;
    int v7 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_921[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
