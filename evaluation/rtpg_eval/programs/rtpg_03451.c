int __arr_3451[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 46;
    int v2 = 69;
    int v3 = 87;
    int v4 = 27;
    int v5 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_3451[i] = v1 + i; }
    for (i = 0; i < 11; i++) {
        v4 = v4 + v2;
    }
    v5 = v5 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
