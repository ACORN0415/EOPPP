int __arr_6830[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 63;
    int v2 = 3;
    int v3 = 24;
    int v4 = 10;
    int i;
    v2 = 19;
    for (i = 0; i < 10; i++) { __arr_6830[i] = v0 + i; }
    for (i = 0; i < 17; i++) {
        v4 = v4 + v0;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
