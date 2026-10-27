int __arr_2104[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 12;
    int v2 = 85;
    int i;
    if (v1 > v0) { v1 = v0; }
    v1 = 36;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_2104[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
