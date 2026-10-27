int __arr_1498[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 53;
    int v2 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_1498[i] = v0 + i; }
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
