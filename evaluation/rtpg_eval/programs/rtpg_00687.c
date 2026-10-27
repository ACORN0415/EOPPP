int __arr_687[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 56;
    int v2 = 90;
    int v3 = 92;
    int v4 = 83;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 10; i++) { __arr_687[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
