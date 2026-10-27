int __arr_8741[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 97;
    int v2 = 46;
    int v3 = 98;
    int v4 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_8741[i] = v3 + i; }
    v1 = v1 + v0;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
