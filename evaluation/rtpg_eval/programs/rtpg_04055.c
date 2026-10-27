int __arr_4055[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 90;
    int v2 = 10;
    int v3 = 85;
    int v4 = 10;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_4055[i] = v0 + i; }
    v3 = v3 / (v0 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
