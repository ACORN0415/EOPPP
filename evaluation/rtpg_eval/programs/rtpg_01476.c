int __arr_1476[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 33;
    int v2 = 72;
    int v3 = 78;
    int v4 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_1476[i] = v4 + i; }
    v1 = v1 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
