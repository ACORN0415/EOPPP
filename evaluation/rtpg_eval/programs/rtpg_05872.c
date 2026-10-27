int __arr_5872[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 58;
    int v2 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_5872[i] = v1 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
