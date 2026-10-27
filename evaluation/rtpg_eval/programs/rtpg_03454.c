int __arr_3454[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 62;
    int v2 = 55;
    int v3 = 24;
    int v4 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_3454[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
