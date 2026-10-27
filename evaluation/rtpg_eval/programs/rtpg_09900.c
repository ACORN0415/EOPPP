int __arr_9900[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 95;
    int v2 = 10;
    int v3 = 55;
    int v4 = 93;
    int v5 = 75;
    int i;
    v3 = v3 + v5;
    for (i = 0; i < 10; i++) { __arr_9900[i] = v1 + i; }
    if (v2 > v5) { v2 = v5; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
