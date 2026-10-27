int __arr_2659[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 24;
    int v2 = 85;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_2659[i] = v0 + i; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
