int __arr_3545[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 69;
    int v2 = 73;
    int v3 = 6;
    int v4 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_3545[i] = v2 + i; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
