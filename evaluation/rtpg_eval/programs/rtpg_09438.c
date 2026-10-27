int test_func(void) {
    int v0 = 93;
    int v1 = 40;
    int v2 = 74;
    int v3 = 14;
    int v4 = 100;
    int v5 = 37;
    int v6 = 23;
    int v7 = 12;
    int i;
    for (i = 0; i < 15; i++) {
        v7 = v7 + v5;
    }
    v4 = v4 + v1;
    v1 = 30;
    return v0;
}
int main(void) { return test_func(); }
