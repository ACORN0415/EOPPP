int __arr_6249[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 81;
    int v2 = 61;
    int v3 = 69;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_6249[i] = v2 + i; }
    v0 = v0 + v3;
    return v0;
}
int main(void) { return test_func(); }
