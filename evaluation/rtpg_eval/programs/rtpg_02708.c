int __arr_2708[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 7;
    int v2 = 26;
    int v3 = 58;
    int i;
    v1 = 63;
    v0 = v0 + v0;
    for (i = 0; i < 10; i++) { __arr_2708[i] = v3 + i; }
    for (i = 0; i < 16; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
