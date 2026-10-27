int __arr_2314[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 12;
    int v2 = 89;
    int v3 = 35;
    int i;
    for (i = 0; i < 10; i++) { __arr_2314[i] = v1 + i; }
    for (i = 0; i < 17; i++) {
        v3 = v3 + v3;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
