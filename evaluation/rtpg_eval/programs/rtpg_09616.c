int __arr_9616[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 78;
    int v2 = 47;
    int v3 = 94;
    int v4 = 65;
    int v5 = 55;
    int v6 = 10;
    int v7 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_9616[i] = v1 + i; }
    v5 = v5 - v1;
    if (v0 > v6) { v0 = v6; }
    v7 = v7 ^ v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
