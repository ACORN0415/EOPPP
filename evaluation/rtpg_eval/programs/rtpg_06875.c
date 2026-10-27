int __arr_6875[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 8;
    int v2 = 39;
    int v3 = 66;
    int v4 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_6875[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
