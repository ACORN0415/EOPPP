int __arr_441[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 88;
    int v2 = 40;
    int v3 = 79;
    int v4 = 96;
    int v5 = 92;
    int v6 = 95;
    int v7 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_441[i] = v0 + i; }
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
