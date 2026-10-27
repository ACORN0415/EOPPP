int __arr_5759[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 44;
    int v2 = 68;
    int v3 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_5759[i] = v0 + i; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
