int __arr_8817[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 38;
    int v2 = 79;
    int v3 = 58;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_8817[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
