int __arr_266[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 23;
    int v2 = 89;
    int v3 = 75;
    int v4 = 30;
    int i;
    for (i = 0; i < 10; i++) { __arr_266[i] = v1 + i; }
    v2 = 98;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 + v4;
    return v0;
}
int main(void) { return test_func(); }
