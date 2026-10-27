int __arr_3983[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 89;
    int v2 = 70;
    int v3 = 8;
    int v4 = 51;
    int v5 = 49;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_3983[i] = v5 + i; }
    v5 = v5 ^ v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
