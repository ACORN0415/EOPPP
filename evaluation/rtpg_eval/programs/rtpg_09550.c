int __arr_9550[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 30;
    int v2 = 64;
    int v3 = 87;
    int v4 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_9550[i] = v4 + i; }
    v2 = v2 % (v0 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
