int __arr_5657[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 34;
    int v2 = 40;
    int v3 = 68;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_5657[i] = v0 + i; }
    v0 = v0 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
