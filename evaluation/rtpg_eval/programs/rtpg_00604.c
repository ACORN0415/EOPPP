int __arr_604[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 80;
    int v2 = 31;
    int v3 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_604[i] = v1 + i; }
    v2 = v2 + v1;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 - v3;
    return v0;
}
int main(void) { return test_func(); }
