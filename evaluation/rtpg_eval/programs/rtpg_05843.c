int __arr_5843[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 40;
    int v2 = 6;
    int v3 = 6;
    int v4 = 8;
    int v5 = 19;
    int v6 = 47;
    int v7 = 14;
    int i;
    v3 = v3 + v1;
    for (i = 0; i < 10; i++) { __arr_5843[i] = v7 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v5 = v5 % (v7 + 1);
    return v0;
}
int main(void) { return test_func(); }
