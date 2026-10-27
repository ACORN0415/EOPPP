int __arr_9471[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 37;
    int v2 = 61;
    int v3 = 55;
    int v4 = 99;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 10; i++) { __arr_9471[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
